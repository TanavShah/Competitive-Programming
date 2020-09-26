//		    Su Saheb?      

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

int main()
{
    ll t,k;
    cin >> t >> k;
    ll a[t], b[t];
    for(ll i = 0 ; i < t ; i++)
    {
	cin >> a[i] >> b[i];
    }
    
    ll en = INT_MIN;

    for(ll i = 0 ; i < t ; i++)
    {
	if(b[i] > en)
	    en = b[i];
    }

    ll dp[en + 10] = {0};
    

    for(ll i = 0 ; i < en + 10 ; i++)
    {
	if(i < k)
	    dp[i] = 1;
	else
	    dp[i] = (dp[i - 1] + dp[i - k]) % MOD;
    }

    for(ll i = 1 ; i < en + 10 ; i++)
	dp[i] = (dp[i] + dp[i - 1]) % MOD;

    for(ll i = 0 ; i < t ; i++)
    {
	cout << (2*MOD + dp[b[i]] - dp[a[i] - 1]) % MOD << endl;
    }

    return 0;
}

