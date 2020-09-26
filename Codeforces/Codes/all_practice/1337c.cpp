//		    Su Saheb?      

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

map<int,vector<int>> gr;
vector<int> dis(200100, 0);
vector<int> cntdown(200100, 0);

void dfs(int v, int u, int dep)
{
    for(int i = 0 ; i < gr[v].size() ; i++)
    {
	if(gr[v][i] != u)
	{
	    dfs(gr[v][i], v, dep + 1);
	    cntdown[v] += cntdown[gr[v][i]];
	}
    }
    dis[v] = dep;
    cntdown[v]++;
}

int main()
{
    ll n,k;
    cin >> n >> k;
    map<int,int> cnt;

    for(ll i = 0 ; i < n - 1 ; i++)
    {
	ll u,v;
	cin >> u >> v;
	gr[u].push_back(v);
	gr[v].push_back(u);
	cnt[u]++;
	cnt[v]++;
    }

    dfs(1, 0, 1);
    ll val[n];

    for(ll i = 1 ; i <= n ; i++)
    {
	val[i - 1] = dis[i] - cntdown[i];
    }
    
    sort(val, val + n, greater<int>());
    ll ans = 0;
    for(ll i = 0 ; i < k ; i++)
	ans += val[i];

    cout << ans << endl;
    
    return 0;
}

