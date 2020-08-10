//			Su Saheb?

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

int main()
{
    int n;
    cin >> n;
    
    ll arr[n];
    for(ll i = 0 ; i < n ; i++)
	cin >> arr[i];

    vector<ll> cp;

    for(ll i = 0 ; i < n ; i += 2)
	cp.push_back(arr[i]);

    for(ll i = 1 ; i < n ; i += 2)
	cp.push_back(arr[i]);

    for(ll i = 0 ; i < n ; i += 2)
	cp.push_back(arr[i]);

    for(ll i = 1 ; i < n ; i += 2)
	cp.push_back(arr[i]);

    ll ans = 0;
    ll cur = 0;
    ll cnt = (n + 1)/2;

    for(ll i = 0 ; i < cnt ; i++)
	cur += cp[i];

    for(ll i = cnt ; i < 2*n ; i++)
    {
	cur = cur + cp[i] - cp[i - cnt];
	ans = max(ans, cur);
    }

    cout << ans << endl;

    return 0;
}

