//			Goli Beta, Masti Nai...

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

vector<vector<ll>> gr(26, vector<ll>(0, 0));
vector<bool> vis(26, 0);

void dfs(ll v)
{
    vis[v] = 1;

    for(ll i = 0 ; i < gr[v].size() ; i++)
    {
	if(!vis[gr[v][i]])
	{
	    dfs(gr[v][i]);
	}
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
	ll n;
	cin >> n;

	for(int i = 0 ; i < 26 ; i++)
	    vis[i] = 0;

	vector<vector<ll>> g(26, vector<ll>(0, 0));
	gr = g;

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

	ll cnt = 0;

	set<pair<ll, ll>> temp;

	int hash[26] = {0};

	for(ll i = 0 ; i < n ; i++)
	{
	    if(a.at(i) == b.at(i))
		continue;

	    hash[a[i] - 'a']++;
	    hash[b[i] - 'a']++;

	    temp.insert({a[i] - 'a', b[i] - 'a'});
	}

	for(int i = 0 ; i < 26 ; i++)
	    if(hash[i])
		cnt++;

	for(auto i = temp.begin() ; i != temp.end() ; i++)
	{
	    gr[i -> first].push_back(i -> second);
	    gr[i -> second].push_back(i -> first);
	}

	ll ans = 0;
	
	for(ll i = 0 ; i < 26 ; i++)
	{
	    if(!vis[i] and gr[i].size() > 0)
	    {
		ans++;
		vis[i] = 1;
		dfs(i);
	    }
	}

	ans = cnt - ans;

	cout << ans << endl;

    }

    return 0;
}

