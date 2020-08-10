//			Goli Beta, Masti Nai...

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

//vector<vector<ll>> g(26, vector<ll>(26, 0));
//vector<vector<ll>> gr(26, vector<ll>(26, 0));

vector<bool> used;
vector<ll> order, component;

void dfs1(ll v, vector<vector<ll>> g)
{
    used[v] = true;
    for(ll i=0; i<g[v].size(); ++i)
	if(!used[g[v][i]])
	    dfs1(g[v][i], g);

    order.push_back (v);
}

void dfs2(ll v, vector<vector<ll>> gr)
{

    used[v] = true;
    component.push_back(v);
    cout << component.size() << endl;
    for (ll i=0; i<gr[v].size(); ++i)
	if (!used[gr[v][i]])
	    dfs2 (gr[v][i], gr);
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {

	vector<vector<ll>> g(26, vector<ll>(0, 0));
	vector<vector<ll>> gr(26, vector<ll>(0, 0));

	ll n;
	cin >> n;

	string a,b;
	cin >> a >> b;

	int flag = 1;

	for(ll i = 0 ; i < n ; i++)
	    if(b.at(i) < a.at(i))
		flag = 0;

	if(!flag)
	{
	    cout << -1 << endl;
	    continue;
	}
	
	for(ll i = 0 ; i < n ; i++)
	{
	    if(a.at(i) == b.at(i))
		continue;

	    g[a.at(i) - 'a'].push_back(b.at(i) - 'a');
 	    gr[b.at(i) - 'a'].push_back(a.at(i) - 'a');
	}

//	cout << 0 << endl;

	ll ans = 0;

	used.assign(n, false);
	for(ll i=0; i<n; ++i)
	    if(!used[i])
		dfs1(i, g);

	used.assign(n, false);

	for(ll i=0; i<n; ++i)
	{
	    ll v = order[n-1-i];
	    if (!used[v])
	    {
		dfs2(v, gr);
		ans += (component.size() - 1);
		component.clear();
	    }
	}

	cout << ans << endl;

    }

    return 0;
}

