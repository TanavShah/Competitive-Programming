//		    Su Saheb?      

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

int main()
{
    ll n;
    cin >> n;

    ll xo[n + 1];
    ll p[n];
    ll ans = 0;
    for(ll i = 0 ; i < n ; i++)
    {
	cin >> p[i];
	ans ^= p[i];

	if(!i)
	    xo[i] = 0;
	else
	    xo[i] = xo[i - 1] ^ i;
    }

    for(ll i = 1 ; i <= n ; i++)
    {
	if((n/i) % 2)
	    ans ^= xo[i - 1];
	
	ans ^= xo[(n % i)];
    }

    cout << ans << endl;

    return 0;
}

