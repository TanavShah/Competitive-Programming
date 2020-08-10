//			Su Saheb?

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
	ll n,k;
	cin >> n >> k;

	ll arr[n], w[k];
	for(ll i = 0 ; i < n ; i++)
	    cin >> arr[i];

	for(ll i = 0 ; i < k ; i++)
	    cin >> w[i];

	sort(arr, arr + n, greater<ll>());
	sort(w, w + k);

	ll ans = 0;
	for(ll i = 0 ; i < k ; i++)
	{
	    ans += arr[i];
	    if(w[i] == 1)
		ans += arr[i];
	}
	
	ll en = k - 1;
	for(ll i = 0 ; i < k ; i++)
	{
	    if(w[i] == 1)
		continue;

	    en += (w[i] - 1);
	    ans += arr[en];
	}

	cout << ans << endl;
    }

    return 0;
}

