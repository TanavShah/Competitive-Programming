//			Su Saheb?

#include <bits/stdc++.h>

using namespace std;

#define MOD 998244353
typedef long long ll;

int main()
{
    ll n;
    cin >> n;

    ll deg[n] = {0};

    for(ll i = 0 ; i < n - 1 ; i++)
    {
	ll u,v;
	cin >> u >> v;

	deg[--u]++;
	deg[--v]++;
    }

    ll ans = n;

    ll fact[200010];
    fact[0] = 1;

    for(ll i = 1 ; i < 200010 ; i++)
	fact[i] = (fact[i - 1]*i) % MOD;

    for(ll i = 0 ; i < n ; i++)
	ans = (ans*fact[deg[i]]) % MOD;

    cout << ans << endl;

    return 0;
}

