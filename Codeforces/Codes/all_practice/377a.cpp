//		    Su Saheb?      

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

int used[510][510];
char maze[510][510];
ll n,m,k;

ll updx[] = {1, -1, 0, 0};
ll updy[] = {0, 0, 1, -1};

bool poss(ll x, ll y)
{
    if(x >= 0 and x < n and y >= 0 and y < m)
	return true;
	return false;
}

void dfs(ll x, ll y)
{
    used[x][y] = 1;
    k--;
    
    for(int i = 0 ; i < 4 ; i++)
    {
	if(k)
	{
	    ll xnext = x + updx[i];
	    ll ynext = y + updy[i];

	    if(poss(xnext, ynext))
		if(maze[xnext][ynext] == '.')
		    if(!used[xnext][ynext])
			dfs(xnext, ynext);
	}
    }
}

int main()
{
    cin >> n >> m >> k;

    memset(used, 0, sizeof(used));

    ll cnts = 0;
    ll stx = -1, sty = -1;

    for(ll i = 0 ; i < n ; i++)
    {
	for(ll j = 0 ; j < m ; j++)
	{
	    cin >> maze[i][j];
	    if(maze[i][j] == '.')
	    {
		stx = i;
		sty = j;
		cnts++;
	    }	
	}
    }

    k = cnts - k;
    
    dfs(stx, sty);
    
    for(ll i = 0 ; i < n ; i++)
    {
	for(ll j = 0 ; j < m ; j++)
	{
	    if(maze[i][j] == '#')
		cout << '#';
	    else
	    {
		if(!used[i][j])
		    cout << 'X';
		else
		    cout << '.';
	    }
	}
	cout << endl;
    }


    return 0;
}

