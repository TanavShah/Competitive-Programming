//			Su Saheb?

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

int main()
{
    string a,b;
    cin >> a >> b;

    int n = b.length();
    int m = a.length();

    ll ans = 0;

    ll b1s = 0;
    for(int i = 0 ; i < n ; i++)
	if(b.at(i) == '1')
	    b1s++;

    b1s %= 2;

    ll dp[m] = {0};
    dp[0] = a.at(0) - '0';

    for(ll i = 1 ; i < m ; i++)
    {
	if(a.at(i) - '0' == 1)
	    dp[i] = dp[i - 1] + 1;
	else
	    dp[i] = dp[i - 1];
    }

    ll prev = 0;

    for(ll i = 0 ; i <= m - n ; i++)
    {
	if((dp[i + n - 1] - prev) % 2 == b1s)
	    ans++;
	
	prev = dp[i];
    }

    cout << ans << endl;

    return 0;
}

