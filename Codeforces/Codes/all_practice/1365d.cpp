//		    Su Saheb?      

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

bool vis[100][100];
char grid[100][100];

void dfs(ll x, ll y, ll n, ll m)
{
    if(x >= n or x < 0 or y >= m or y < 0)
	return;

    if(grid[x][y] == '#' or vis[x][y])
	return;

    vis[x][y] = 1;
 //   cout << vis[x][y] << endl;

    dfs(x - 1, y, n, m);
    dfs(x + 1, y, n, m);
    dfs(x, y - 1, n, m);
    dfs(x, y + 1, n, m);
}

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {	
	for(int i = 0 ; i < 100 ; i++)
	{
	    for(int j = 0 ; j < 100 ; j++)
	    {
		vis[i][j] = 0;
		grid[i][j] = 'a';
	    }
	}

	ll n,m;
	cin >> n >> m;

	for(ll i = 0 ; i < n ; i++)
	    for(ll j = 0 ; j < m ; j++)
		cin >> grid[i][j];

	int flag = 1;

	for(ll i = 0 ; i < n ; i++)
	{
	    for(ll j = 0 ; j < m ; j++)
	    {
		if(grid[i][j] == 'B')
		{
		    if(i + 1 < n)
		    {
			if(grid[i + 1][j] == 'G')
			    flag = 0;
			if(grid[i + 1][j] == '.')
			    grid[i + 1][j] = '#';
		    }

		    if(i - 1 >= 0)
		    {
			if(grid[i - 1][j] == 'G')
			    flag = 0;
			if(grid[i - 1][j] == '.')
			    grid[i - 1][j] = '#';
		    }

		    if(j + 1 < m)
		    {
			if(grid[i][j + 1] == 'G')
			    flag = 0;
			if(grid[i][j + 1] == '.')
			    grid[i][j + 1] = '#';
		    }

		    if(j - 1 >= 0)
		    {
			if(grid[i][j - 1] == 'G')
			    flag = 0;
			if(grid[i][j - 1] == '.')
			    grid[i][j - 1] = '#';
		    }
		}
	    }
	}

//	cout << flag << endl;

	dfs(n - 1, m - 1, n, m);
		
	for(ll i = 0 ; i < n ; i++)
	{
	    for(ll j = 0 ; j < m ; j++)
	    {
//		cout << grid[i][j] << " ";
		if(grid[i][j] == 'G' and !vis[i][j])
		    flag = 0;
	    }
//	    cout << endl;
	}

	if(flag)
	    cout << "Yes" << endl;
	else
	    cout << "No" << endl;

    }

    return 0;
}

