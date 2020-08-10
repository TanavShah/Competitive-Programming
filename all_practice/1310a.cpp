//		    Su Saheb?      

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

int main()
{
    ll n;
    cin >> n;
    map<ll, vector<ll>> val;
    ll a[n], t[n];

    for(ll i = 0 ; i < n ; i++)
	cin >> a[i];

    for(ll i = 0 ; i < n ; i++)
	cin >> t[i];

    for(ll i = 0 ; i < n ; i++)
	val[a[i]].push_back(t[i]);

    ll ans = 0;

    for(auto i = val.begin() ; i != val.end() ; i++)
    {
	if((i -> second).size() == 1)
	    continue;
	
	ll sum = 0;
	ll maxi = -1;
	ll ind = -1;

	for(ll j = 0 ; j < (i -> second).size() ; j++)
	{
	    sum += (i -> second)[j];
	    maxi = max(maxi, (i -> second)[j]);
	    if(maxi > (i -> second)[j])
		ind = j;
	}

	sum -= maxi;
	ans += sum;

	for(ll j = 0 ; j < (i -> second).size() ; j++)
	{
	    if(j == ind)
		continue;

	    val[(i -> first) + 1].push_back((i -> second)[j]);
	}
    }

    cout << ans << endl;

    return 0;
}

