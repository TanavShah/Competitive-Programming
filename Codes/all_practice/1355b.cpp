//		    Su Saheb?      

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
	ll n;
	cin >> n;
	ll arr[n];
	for(ll i = 0 ; i < n ; i++)
	    cin >> arr[i];
	
	sort(arr, arr + n);
	ll dp[n + 1] = {0};
	if(arr[0] == 1)
	    dp[1] = 1;
	
	for(ll i = 1 ; i < n ; i++)
	{
	    if(i + 1 >= arr[i])
	    {
		dp[i + 1] = max(dp[i], 1 + dp[i - arr[i] + 1]);
	    }
	    else
	    {
		dp[i + 1] = dp[i];
	    }
	}

	cout << dp[n] << endl;
	
	
    }

    return 0;
}

