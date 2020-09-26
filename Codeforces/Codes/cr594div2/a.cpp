#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007 

int main()
{

	#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt" , "w" , stdout);
	#endif


	long long t;
	cin >> t;
	while(t--)
	{
		long long n;
		cin >> n;
		long long arr1[n];
		long long ev1 = 0 , od1 = 0;
		for(long long i = 0 ; i < n ; i++)
		{
			cin >> arr1[i];
			if(arr1[i] % 2 == 0)
			{
				ev1++;
			}
			else
			{
				od1++;
			}
		}

		long long m;
		cin >> m;
		long long arr2[m];
		long long ev2 = 0 , od2 = 0;
		for(long long i = 0 ; i < m ; i++)
		{
			cin >> arr2[i];
			if(arr2[i] % 2 == 0)
			{
				ev2++;
			}
			else
			{
				od2++;
			}
		}

		long long ans = ev1*ev2 + od1*od2;
		cout << ans << endl;
	}

	return  0;
}