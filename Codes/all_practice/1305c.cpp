//		    Su Saheb?      

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

int main()
{
    ll n,m;
    cin >> n >> m;

    ll arr[n];
    for(ll i = 0 ; i < n ; i++)
    {
	cin >> arr[i];
    }

    if(n > m)
    {
	cout << 0 << endl;
	return 0;
    }

    ll ans = 1;
    for(ll i = 0 ; i < n ; i++)
	for(ll j = i + 1 ; j < n ; j++)
	{
	    ll temp = abs(arr[j] - arr[i]) % m;
	    ans = (ans*temp) % m;
	}  

    cout << ans << endl;
    return 0;
}

