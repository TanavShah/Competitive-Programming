//			Su Saheb?

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

int main()
{
    ll dp[2000001];
    dp[3] = 1;
    dp[4] = 1;
    dp[5] = 3;

    for(ll i = 6 ; i < 2000001 ; i++)
    {
//	dp[i] = (((dp[i - 1] % MOD) + (2*dp[i - 2] % MOD) % MOD) + 1*(i % 3 == 0)) % MOD;vi
	dp[i] = ((dp[i - 1] + 2*dp[i - 2])) % MOD;
	if(i % 3 == 0)
	    dp[i] = (dp[i] + 1) % MOD;
    }

    ll t;
    cin >> t;
    while(t--)
    {
	ll n;
	cin >> n;
	cout << (dp[n]*4) % MOD << endl;
    }

    return 0;
}

