//		    Su Saheb?      

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

int main()
{
    ll n;
    cin >> n;
    map<ll,ll> m;

    for(ll i = 0 ; i < n ; i++)
    {
	ll t;
	cin >> t;
	m[t]++;
    }

    vector<ll> arr;
    vector<ll> nums;
    
    for(auto i = m.begin() ; i != m.end() ; i++)
    {
	arr.push_back((i -> first)*(i -> second));
	nums.push_back(i -> first);
    }
    
    ll l = m.size();
    ll dp[l] = {0};
    dp[l - 1] = arr[l - 1];
    dp[l - 2] = max(arr[l - 1], arr[l - 2]);

    if(nums[l - 1] - nums[l - 2] != 1)
	dp[l - 2] = arr[l - 2] + arr[l - 1];

    for(ll i = l - 3 ; i >= 0 ; i--)
    {
	if(nums[i + 1] - nums[i] == 1)
	    dp[i] = max(dp[i + 2] + arr[i], dp[i + 1]);
	else
	    dp[i] = max(dp[i + 2] + arr[i], dp[i + 1] + arr[i]);
    }

    cout << dp[0] << endl;
    

    return 0;
}

