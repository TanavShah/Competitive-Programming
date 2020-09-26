//		    Su Saheb?      

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

int main()
{
    ll n;
    cin >> n;

    ll p[n];
    for(ll i = 0 ; i < n ; i++)
    {
	cin >> p[i];
	p[i]--;
    }

    ll dp[n + 1] = {0};
    ll ans = 0;

    for(ll i = 1 ; i <= n ; i++)
	dp[i] = (((2*dp[i - 1]) % MOD) + 2 - dp[p[i - 1]] + MOD) % MOD;

    cout << dp[n] << endl;

    return 0;
}

