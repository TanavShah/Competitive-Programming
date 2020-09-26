//		    Su Saheb?      

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

int main()
{
    ll n;
    cin >> n;

    ll a[n];
    for(ll i = 0 ; i < n ; i++)
	cin >> a[i];

    ll ans = 0;

    for(ll i = 0 ; i < n ; i++)
	for(ll j = 0 ; j < n ; j++)
	    for(ll k = 0 ; k < n ; k++)
		ans = max(ans, ((a[i] | a[j]) | a[k]));
    
    cout << ans << endl;

    return 0;
}

