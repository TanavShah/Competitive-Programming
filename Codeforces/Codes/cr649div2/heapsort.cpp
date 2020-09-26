#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll; 

void heapify(int arr[], int n, int i)
{
	int maxi = i;
	int lc = 2*i + 1;
	int rc = 2*i + 2;

	if(lc < n and arr[lc] > arr[maxi])
		maxi = lc;

	if(rc < n and arr[rc] > arr[maxi])
		maxi = rc;

	if(maxi != i)
	{
		swap(arr[maxi], arr[i]);
		heapify(arr, n, maxi);
	}
}

void mysort(int arr[], int n)
{
	for(int i = n/2 - 1 ; i >= 0 ; i--)
		heapify(arr, n, i);

	for(int i = n - 1 ; i > 0 ; i--)
	{
		swap(arr[0], arr[i]);
		heapify(arr, i, 0);
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

	mysort(arr, n);

	for(int i = 0 ; i < n ; i++)
		cout << arr[i] << " ";


	return  0;
}