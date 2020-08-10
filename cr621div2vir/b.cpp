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
		int n,x;
		cin >> n >> x;
		int arr[n];
		for(int i = 0 ; i < n ; i++)
		{
			cin >> arr[i];
		}
		sort(arr, arr + n);

		int y = arr[n - 1];



		int k;
		if(x % y == 0)
		{
			k = x/y - 2;
		}
		else
		{
			k = x/y - 1;
		}
		if(binary_search(arr, arr + n, x))
		{
			cout << 1 << endl;
			continue;
		}
		if(y > x)
		{
			cout << 2 << endl;
			continue;
		}
		
		x= x-k*y;

		int ans = k;
		if(binary_search(arr, arr + n, x))
		{
			ans++;
		}
		else
		{
			ans+=2;
		}
		cout << ans << endl;
	}


	return  0;
}