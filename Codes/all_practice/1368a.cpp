//			Su Saheb?

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
	ll a,b,n;
	cin >> a >> b >> n;
	ll ans = 0;

	while(max(a,b) <= n)
	{
	    if(a < b)
		a += b;
	    else
		b += a;

	    ans++;
	}

	cout << ans << endl;
    }

    return 0;
}

