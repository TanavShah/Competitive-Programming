//			Goli Beta, Masti Nai...

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
	ll n,x;
	cin >> n >> x;

	ll arr[n];
	for(ll i = 0 ; i < n ; i++)
	    cin >> arr[i];

	sort(arr, arr + n, greater<ll>());

	ll en = -1;
	ll ans = 0;

	for(ll i = 0 ; i < n ; i++)
	{
	    if(arr[i]*(i - en) >= x)
	    {
		ans++;
		en = i;
	    }
	}

	cout << ans << endl;
    }

    return 0;
}

