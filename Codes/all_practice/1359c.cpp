//		    Su Saheb?      

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

double met(ll h, ll c, ll x)
{
    double ret = (double)(x*h + x*c - c)/(double)(2*x - 1);
    return ret;
}

int main()
{
    ll te;
    cin >> te;
    while(te--)
    {
	ll h,c,t;
	cin >> h >> c >> t;
	
	double dif1 = (h + c)/2.0 - t;

	if(dif1 >= 0)
	{
	    cout << 2 << endl;
	    continue;
	}

	dif1 = abs(dif1);

	ll x1 = (t - c)/(2*t - c - h);
	double dif2 = abs(met(h,c,x1) - (double)t);
    
	ll x2 = x1 + 1;
	double dif3 = abs(met(h, c, x2) - (double)t);
    
	ll x3 = x1 - 1;
	double dif4 = abs(met(h, c, x3) - (double)t);

	if(x3 <= 0)
	{
	    dif4 = INT_MAX;
	}

//	cout << dif1 << " " << dif2 << " " << dif3 << " " << dif4 << endl << endl;
	
	if(dif1 <= dif2 and dif1 <= dif3 and dif1 <= dif4)
	{
	    cout << 2 << endl;
	    continue;
	}

	if(dif4 <= dif1 and dif4 <= dif2 and dif4 <= dif3)
	{
	    cout << x3 + x3 - 1<< endl;
	    continue;
	}

	if(dif2 <= dif1 and dif2 <= dif3 and dif2 <= dif4)
	{
	    cout << 2*x1 - 1 << endl;
	    continue;
	}

	cout << 2*x2 - 1 << endl;
    }

    return 0;
}

