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
	ll n,k;
	cin >> n >> k;
	ll a[n], b[n];
	ll sum = 0;
	for(ll i = 0 ; i < n ; i++)
	{
	    cin >> a[i];
	    sum += a[i];
	}

	for(ll i = 0 ; i < n ; i++)
	    cin >> b[i];

	sort(a, a + n);
	sort(b, b + n);

	for(ll i = 0 ; i < k ; i++)
	{
	    if(b[n - i - 1] <= a[i])
	    {
		break;
	    }

	    sum -= a[i];
	    sum += b[n - i - 1];
	}

	cout << sum << endl;
    }

    return 0;
}

