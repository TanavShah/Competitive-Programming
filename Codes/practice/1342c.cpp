//		    Su Saheb?      

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
	ll a,b,q;
	cin >> a >> b >> q;

	if(a == b)
	{
	    while(q--)
	    {
		cout << 0 << " ";
	    }
	    cout << endl;
	    continue;
	}

	while(q--)
	{
	    ll l,r;
	    cin >> l >> r;

	    ll ans = 0;

	    if(r < b)
	    {
		cout << 0 << " ";
		continue;
	    }

	    l = max(l, b);

	    ll mupp = r/(a*b);
	    ll mdon = (ceil)((double)l/(double)(a*b));

	    ll tosub = 0;
	    if(mdon < mupp)
	    {
		tosub = (mupp - mdon)*b;
	    }

	    if(mupp*a*b + b - 1 <= r)
	    {
		tosub += b;
	    }
	    else
	    {
		tosub += (r - mupp*a*b + 1);
	    }

	    if(mdon > mupp)
		tosub = 0;

	    ans = r - l + 1 - tosub;
//	    cout << "s " << tosub << endl;
	    cout << ans << " ";
	}
	cout << endl;
    }

    return 0;
}

