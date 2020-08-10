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
	ll n,x;
	cin >> n >> x;

	ll arr[n];
	for(ll i = 0 ; i < n ; i++)
	    cin >> arr[i];

	ll forw[n] = {0}, back[n] = {0};
	forw[0] = arr[0];
	back[n - 1] = arr[n - 1];

	for(ll i = 1 ; i < n ; i++)
	    forw[i] = forw[i - 1] + arr[i];

	for(ll i = n - 2 ; i >= 0 ; i--)
	    back[i] = back[i + 1] + arr[i];

	if(forw[n - 1] % x)
	{
	    cout << n << endl;
	    continue;
	}

	ll front = 0, end = 0;

	for(ll i = 0 ; i < n ; i++)
	    if(forw[i] % x)
		front = max(front, i + 1);

	for(ll j = n - 1 ; j >= 0 ; j--)
	    if(back[j] % x)
		end = max(end, n - j);
	
	ll ans = max(front, end) ? max(front, end) : -1;
	cout << ans << endl;
    }

    return 0;
}

