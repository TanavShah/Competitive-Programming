//		    Su Saheb?      

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

int main()
{
    ll n;
    cin >> n;
    
    ll arr[n], pre[n] = {0};
    for(ll i = 0 ; i < n ; i++)
    {
	cin >> arr[i];
	if(i == 0)
	    pre[i] = arr[i];
	else
	    pre[i] = pre[i - 1] + arr[i];
    }

    ll ans = 0;
    for(ll i = 0 ; i < n - 1 ; i++)
    {
	if(pre[i] == pre[n - 1] - pre[i])
	    ans++;
    }

    cout << ans << endl;

    return 0;
}

