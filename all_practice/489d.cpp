//		    Su Saheb?      

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

int main()
{
    ll n,m;
    cin >> n >> m;
    vector<ll> gr[n];
    int mat[n][n];
    memset(mat, 0, sizeof(mat));

    for(ll i = 0 ; i < m ; i++)
    {
	ll a1, a2;
	cin >> a1 >> a2;
	a1--;
	a2--;
	gr[a1].push_back(a2);
	mat[a1][a2] = 1;
    }

    ll ans = 0;

    for(ll a = 0 ; a < n ; a++)
    {
	for(ll c = 0 ; c < n ; c++)
	{
	    ll r = 0;
	    if(a != c)
	    {
		for(ll b = 0 ; b < gr[a].size() ; b++)
		{
		    if(gr[a][b] != a and gr[a][b] != c and mat[gr[a][b]][c])
		    {
			r++;
		    }
		}
	    }
	    ans += (r)*(r - 1)/2;
	}
    }

    cout << ans << endl;


    return 0;
}

