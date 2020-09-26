#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

void merge(int arr[], int low, int mid, int high)
{
	int size1 = mid - low + 1;
	int size2 = high - mid;

	int left[size1], right[size2];

	for(int i = 0 ; i < size1 ; i++)
		left[i] = arr[low + i];

	for(int i = 0 ; i < size2 ; i++)
		right[i] = arr[mid + 1 + i];

	int i = 0, j = 0, k = low;

	while(i < size1 and j < size2)
	{
		if(left[i] <= right[j])
			arr[k++] = left[i++];
		else
			arr[k++] = right[j++];
	}

	while(i < size1)
		arr[k++] = left[i++];

	while(j < size2)
		arr[k++] = right[j++];
}

void mysort(int arr[], int low, int high)
{
	if(low < high)
	{
		int mid = low + (high - low)/2;

		mysort(arr, low, mid);
		mysort(arr, mid + 1, high);

		merge(arr, low, mid, high);
	}
}

int main()
{

	#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt" , "w" , stdout);
	#endif

	int n;
	cin >> n;

	int arr[n];
	for(int i = 0 ; i < n ; i++)
		cin >> arr[i];

	mysort(arr, 0, n - 1);

	for(int i = 0 ; i < n ; i++)
		cout << arr[i] << " ";


	return  0;
}