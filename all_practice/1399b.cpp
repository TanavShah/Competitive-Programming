//			Goli Beta, Masti Nai...

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
	int n;
	cin >> n;

	ll a[n], b[n];

	for(ll i = 0 ; i < n ; i++)
	    cin >> a[i];

	for(ll i = 0 ; i < n ; i++)
	    cin >> b[i];

	ll t1 = *min_element(a, a + n);
	ll t2 = *min_element(b, b + n);

	ll ans = 0;

	for(ll i = 0 ; i < n ; i++)
	{
	    ll temp = min(a[i] - t1, b[i] - t2);
	    a[i] -= temp;
	    b[i] -= temp;
	    ans += temp;

	    if(a[i] > t1)
		ans += (a[i] - t1);
	    if(b[i] > t2)
		ans += (b[i] - t2);
	}

	cout << ans << endl;
    }

    return 0;
}

