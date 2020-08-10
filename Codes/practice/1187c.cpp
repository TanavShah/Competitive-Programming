//			Su Saheb?

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

int main()
{
    ll n,m;
    cin >> n >> m;

    vector<pair<ll,ll>> ones, zero;
    
    for(ll i = 0 ; i < m ; i++)
    {
	ll t;
	cin >> t;
	
	ll st, en;
	cin >> st >> en;

	if(t)
	    ones.push_back({st, en});
	else
	    zero.push_back({st, en});
    }

    ll ans[n + 1];
    for(ll i = 0 ; i <= n ; i++)
	ans[i] = i;

    vector<pair<ll, ll>> comp0, comp1;

    sort(ones.begin(), ones.end());
    sort(zero.begin(), zero.end());

    ll last = 0;

    for(ll i = 0 ; i < zero.size() ; i++)
    {
	if(i == 0)
	    comp0.push_back(zero[0]);
	else
	{
	    if(zero[i].first > comp0[last].second)
	    {
		comp0.push_back(zero[i]);
		last++;
	    }
	    else
		comp0[last].second = max(comp0[last].second, zero[i].second);
	}
    }

    last = 0;

    for(ll i = 0 ; i < ones.size() ; i++)
    {
	if(i == 0)
	    comp1.push_back(ones[0]);
	else
	{
	    if(ones[i].first > comp1[last].second)
	    {
		comp1.push_back(ones[i]);
		last++;
	    }
	    else
		comp1[last].second = max(comp1[last].second, ones[i].second);
	}
    }

/*
    for(ll i = 0 ; i < comp0.size() ; i++)
	cout << comp0[i].first << " " << comp0[i].second << endl;

    cout << endl;

    for(ll i = 0 ; i < comp1.size() ; i++)
	cout << comp1[i].first << " " << comp1[i].second << endl;
*/
    ll flag = 0;
    for(ll i = 0 ; i < comp0.size() ; i++)
    {
	for(ll j = 0 ; j < comp1.size() ; j++)
	{
	    if(comp1[j].first > comp0[i].second)
		break;

	    if((comp1[j].first < comp0[i].second and comp1[j].first > comp0[i].first) or		(comp0[i].second > comp1[j].first and comp0[i].second < comp1[j].second))
	    {
		flag = 1;
		break;
	    }

	    if(comp0[i] == comp1[j])
	    {
		flag = 1;
		break;
	    }
	}

	if(flag)
	    break;
    }

    ll hash[n + 1] = {0};

    for(ll i = 0 ; i < zero.size() ; i++)
    {
	if(hash[ans[zero[i].first]] == 0)
	   swap(ans[zero[i].first], ans[zero[i].first + 1]);

	hash[ans[zero[i].first]] = 1;
    }

    if(flag)
	cout << "NO" << endl;
    else
    {
	cout << "YES" << endl;
	for(ll i = 1 ; i <= n ; i++)
	    cout << ans[i] << " ";

	cout << endl;
    }

    return 0;
}

