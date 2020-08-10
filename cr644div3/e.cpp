#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll; 

int main()
{

	#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt" , "w" , stdout);
	#endif

	ll t;
	cin >> t;
	while(t--)
	{
		ll n;
		cin >> n;
		char arr[n][n];
		for(int i = 0 ; i < n ; i++)
		{
			for(int j = 0 ; j < n ; j++)
				cin >> arr[i][j];
		}

		int flag = 1;

		for(int i = 0 ; i < n ; i++)
		{
			for(int j = 0 ; j < n ; j++)
			{
				if(j != n - 1 and i != n - 1 and arr[i][j] == '1')
				{
					if(arr[i+1][j] == '0' and arr[i][j + 1] == '0')
					{
						flag = 0;
						break;
					}
				}
			}
			if(flag == 0)
				break;
		}

		if(flag)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}


	return  0;
}