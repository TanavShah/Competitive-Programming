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

    string s;
    cin >> s;

    ll cnt[26] = {0};
    for(ll i = 0 ; i < n ; i++)
	cnt[s.at(i) - 'a']++;

    ll ans = 0;
    for(ll i = 1 ; i <= n ; i++)
    {
	ll len = __gcd(i, k);
	ll numgrps = i/len;

	ll temp = 0;
	for(ll j = 0 ; j < 26 ; j++)
	    temp += cnt[j]/numgrps;

	if(temp >= len)
	    ans = i;
    }

    cout << ans << endl;
}
    return 0;
}

