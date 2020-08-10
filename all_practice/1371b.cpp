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
	ll n,r;
	cin >> n >> r;

	ll ans;
	if(n > r)
	    ans = (r*(r + 1LL))/2LL;
	else
	    ans = (n*(n - 1LL))/2LL + 1LL;

	cout << ans << endl;
    }

    return 0;
}

