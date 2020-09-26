#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007 

int main()
{

	#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt" , "w" , stdout);
	#endif

	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int m = 2*n;
		int arr[m];
		for(int i = 0 ; i < m ; i++)
			cin >> arr[i];

		sort(arr, arr + m);
		int ans = arr[n] - arr[n - 1];
		cout << ans << endl;
	}


	return  0;
}