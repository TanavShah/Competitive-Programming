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
	ll a,b,c;
	cin >> a >> b >> c;
	ll A,B,C, ans = INT_MAX;
	
	for(ll i = 1 ; i <= 2*a ; i++)
	{
	    ll temp = abs(a - i);

	    for(ll j = i ; j <= 2*b ; j += i)
	    {
		temp += abs(b - j);
    
		ll t1 = (c/j)*j;
		ll t2 = (ceil((double)c/(double)j))*j;

		temp += (min(abs(c - t1), abs(c - t2)));

		if(temp < ans)
		{
		    A = i;
		    B = j;
		    if(abs(c - t1) < abs(c - t2))
			C = t1;
		    else
			C = t2;
		}

		ans = min(ans, temp);

		temp = abs(a - i);
	    }
	}

	cout << ans << endl << A << " " << B << " " << C << endl;
    }

    return 0;
}

