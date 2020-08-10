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
	ll a,b;
	cin >> a >> b;

	ll powa = 0, powb = 0;

	while(1)
	{
	    if(a % 2 == 0)
	    {
		powa++;
		a /= 2;
	    }
	    else
		break;
	}

	while(1)
	{
	    if(b % 2 == 0)
	    {
		powb++;
		b /= 2;
	    }
	    else
		break;
	}

	if(a != b)
	{
	    cout << -1 << endl;
	    continue;
	}

	ll dif = abs(powa - powb);

	cout << ceil(dif/3.0) << endl;
    }

    return 0;
}

