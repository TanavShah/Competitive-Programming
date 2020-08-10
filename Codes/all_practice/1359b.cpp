//		    Su Saheb?      

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
	int n,m,x,y;
	cin >> n >> m >> x >> y;

	int arr[n][m];
	for(int i = 0 ; i < n ; i++)
	    for(int j = 0 ; j < m ; j++)
		arr[i][j] = -1;

	for(int i = 0 ; i < n ; i++)
	{
	    int start = 1;
	    for(int j = 0 ; j < m ; j++)
	    {
		char temp;
		cin >> temp;

		if(temp == '*')
		{
		    start = 1;
		    continue;
		}

		arr[i][j] = (start + 1) % 2;
		start = (start + 1) % 2;
	    }
	}

	ll ans = 0;

	for(int i = 0 ; i < n ; i++)
	{
	    for(int j = 0 ; j < m ; j++)
	    {
		if(arr[i][j] == -1)
		    continue;

		if(arr[i][j] == 0)
		{
		    ans += x;
		    continue;
		}

		if(arr[i][j] == 1)
		{
		    int upd = min(x, y - x);
		    ans += upd;
		}
	    }
	}

	cout << ans << endl;
    }

    return 0;
}

