#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll; 

void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 

int partition(int arr[], int low, int high)
{
	int pivot = arr[high];
	int start = low - 1;

	for(int i = low ; i < high ; i++)
	{
		if(arr[i] <= pivot)
		{
			start++;
			swap(&arr[start], &arr[i]);
		}
	}

	swap(&arr[start + 1], &arr[high]);

	return start + 1;

}

void mysort(int arr[], int low, int high)
{
	if(low < high)
	{
		int pos = partition(arr, low, high);

		mysort(arr, low, pos - 1);
		mysort(arr, pos + 1, high);
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