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
	ll l,r,m;
	cin >> l >> r >> m;

	ll dmin = l - r;
	ll dmax = r - l;

	ll a,b,c;

//	ll low = dmin;
//	ll high = min(dmin + 2*l, dmax);

	for(ll i = l ; i <= r ; i++)
	{
	    if(m >= i)
	    {
		if((m % i) <= (r - l))
		{
		    a = i;
		    b = l + (m % i);
		    c = l;
		}
	    }
	    
	    ll d = i - (m % i);

	    if(d <= (r - l))
	    {
		a = i;
		b = l;
		c = l + d;
	    }
	}

/*
	while(low <= high)
	{
	    ll mid = (low + high)/2;

	    if(mid + m == 0)
	    {
		high = mid;
		continue;
	    }

	    if((mid + m) % a == 0)
	    {
		d = mid;
		break;
	    }
    
	    if((mid + m) % a > 0)
		high = mid;
	    else
		low = mid + 1;
	}

	if(d > 0)
	{
	    c = dmax;
	    b = c - d;
	}
	else
	{
	    b = dmax;
	    c = b + d;
	}
*/
	cout << a << " " << b << " " << c << endl;
    }

    return 0;
}

