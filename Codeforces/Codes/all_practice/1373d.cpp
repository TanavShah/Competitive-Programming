//			Su Saheb?

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

ll msum(vector<ll> v)
{
    ll n = v.size();
    ll sofar = v[0];
    ll curmax = v[0];

    for(ll i = 1 ; i < n ; i++)
    {
	curmax = max(v[i], curmax + v[i]);
	sofar = max(sofar, curmax);
    }

    return sofar;
}

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
	ll n;
	cin >> n;
	ll arr[n];
	ll sum = 0;

	for(ll i = 0 ; i < n ; i++)
	{
	    cin >> arr[i];
	    if(i % 2 == 0)
		sum += arr[i];
	}

	if(n == 1)
	{
	    cout << arr[0] << endl;
	    continue;
	}

	if(n == 2)
	{
	    cout << max(arr[0], arr[1]) << endl;
	    continue;
	}
	
	ll ans = 0;

	vector<ll> v1, v2;
	for(ll i = 1 ; i < n ; i += 2)
	{
	    v1.push_back(arr[i] - arr[i - 1]);
	    if(i + 1 < n)
		v2.push_back(arr[i] - arr[i + 1]);
	}

	ll a1 = 0, a2 = 0;
	a1 = max(a1, msum(v1));
	a2 = max(a2, msum(v2));

	cout << sum + max(a1, a2) << endl;
    }

    return 0;
}

