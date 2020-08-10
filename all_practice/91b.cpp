//			Su Saheb?

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

int main()
{
    ll n;
    cin >> n;

    ll arr[n];
    for(ll i = 0 ; i < n ; i++)
	cin >> arr[i];

    ll small[n] = {0};
    small[n - 1] = arr[n - 1];

    for(ll i = n - 2 ; i >= 0 ; i--)
	small[i] = min(small[i + 1], arr[i]);

    vector<pair<ll, ll>> comp;
    comp.push_back({small[0], 1});
    ll ind = 0;
    
    for(ll i = 1 ; i < n ; i++)
    {
	if(small[i] != small[i - 1])
	{
	    ind++;
	    comp.push_back({small[i], 1});
	}
	else
	    comp[ind].second++;
    }

    for(ll i = 0 ; i < comp.size() ; i++)
    {
	ll start = (comp[i].second) - 2;
	while(start != -2)
	    cout << start-- << " ";
    }
    cout << endl;

    return 0;
}

