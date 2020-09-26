//		    Su Saheb?      

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

int main()
{
    ll n,k;
    cin >> n >> k;

    map<ll, ll> fr;
    for(ll i = 0 ; i < n ; i++)
    {
	ll temp;
	cin >> temp;
	fr[temp]++;
    }

    n = fr.size();

    vector<ll> ele;
    for(auto i = fr.begin() ; i != fr.end() ; i++)
	ele.push_back(i -> first);

    if(n == 1)
    {
	cout << fr.begin() -> second << " " << fr.begin() -> first << endl;
	return 0;
    }

    ll poss[n] = {0};
    ll offset = 0;

    for(auto i = fr.begin() ; i != fr.end() ; i++)
    {
	ll left = k;
	poss[offset] += i -> second;
	if(offset == 0)
	{
	    offset++;
	    continue;
	}
	
	for(ll j = offset - 1 ; j >= 0 and left > 0 ; j--)
	{
	    ll need = (ele[offset] - ele[j])*fr[ele[j]];
	    ll add;

	    if(need > left)
	    {
		add = left/(ele[offset] - ele[j]);
		left -= add*(ele[offset] - ele[j]);
	    }
	    else
	    {
		left -= need;
		add = fr[ele[j]];
	    }

	    poss[offset] += add;
	}

	offset++;
    }

    ll ans, ansfr = 0;
    for(ll i = 0 ; i < n ; i++)
    {
	if(poss[i] > ansfr)
	{
	    ansfr = poss[i];
	    ans = ele[i];
	}
    }

    cout << ansfr << " " << ans << endl;

    return 0;
}

