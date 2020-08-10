//		    Su Saheb?      

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

int main()
{
    ll n,m;
    cin >> n >> m;

    map<ll, vector<ll>> ans;
    
    int flag = 0;
    vector<pair<ll, ll>> gr;
    
    ll deg[n] = {0};

    for(ll i = 0 ; i < m ; i++)
    {
	ll u,v;
	cin >> u >> v;
	gr.push_back({u, v});
	deg[--u]++;
	deg[--v]++;
    }

    for(ll i = 0 ; i < n ; i++)
    {
	cout << deg[i] << " ";
    }
    cout << endl;

    ll arr[n];
    for(ll i = 0 ; i < n ; i++)
    {
	cin >> arr[i];
	ans[arr[i]].push_back(i + 1);
    }

    for(ll i = 0 ; i < n ; i++)
    {
	if(arr[i] > deg[i] + 1)
	{
	    flag = 1;
	    break;
	}
    }

    for(ll i = 0 ; i < m ; i++)
    {
	ll u = gr[i].first;
	ll v = gr[i].second;

	if(arr[--u] == arr[--v])
	{
	    flag = 1;
	    break;
	}
    }



    if(flag)
	cout << -1 << endl;
    else
    {
	for(auto i = ans.begin() ; i != ans.end() ; i++)
	{
	    for(ll j = 0 ; j < (i -> second).size() ; j++)
	    {
		cout << (i -> second)[j] << " ";
	    }
	}
	cout << endl;
    }

    return 0;
}

