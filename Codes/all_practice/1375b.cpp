//			Su Saheb?

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
	ll n,m;
	cin >> n >> m;

	ll arr[n][m];
	int flag = 0;

	for(ll i = 0 ; i < n ; i++)
	{
	    for(ll j = 0 ; j < m ; j++)
	    {
		cin >> arr[i][j];

		if(i == 0 and j == 0 and arr[i][j] > 2)
		{
		    flag = 1;
		    continue;
		}

		if(i == 0 and j == m - 1 and arr[i][j] > 2)
		{
		    flag = 1;
		    continue;
		}

		if(j == 0 and i == n - 1 and arr[i][j] > 2)
		{
		    flag = 1;
		    continue;
		}

		if(i == n - 1 and j == m - 1 and arr[i][j] > 2)
		{
		    flag = 1;
		    continue;
		}

		if((i == 0 or i == n - 1 or j == 0 or j == m - 1) and arr[i][j] > 3)
		{
		    flag = 1;
		    continue;
		}

		if(arr[i][j] > 4)
		{
		    flag = 1;
		    continue;
		}
    
		if((i == 0 and j == 0) or (i == 0 and j == m - 1) or (i == n - 1 and j == 0) or (i == n - 1 and j == m - 1))
		{
		    arr[i][j] = 2;
		    continue;
		}

		if(i == 0 or j == 0 or i == n - 1 or j == m - 1)
		{
		    arr[i][j] = 3;
		    continue;
		}

		arr[i][j] = 4;
	    }
	}

	if(flag)
	{
	    cout << "NO" << endl;
	}
	else
	{
	    cout << "YES" << endl;
	    for(ll i = 0 ; i < n ; i++)
	    {
		for(ll j = 0 ; j < m ; j++)
		{
		    cout << arr[i][j] << " ";
		}

		cout << endl;
	    }
	}
    
    }

    return 0;
}

