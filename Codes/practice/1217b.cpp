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
	ll n,x;
	cin >> n >> x;
	ll dif = -1;
	ll d = -1;
	while(n--)
	{
	    ll t1, t2;
	    cin >> t1 >> t2;
	    d = max(d, t1);
	    dif = max(dif, t1 - t2);
	}

	    ll ans = 1;
	    x -= d;
	    if(x > 0)
	    {
		if(dif <= 0)
		    ans = -1;
		else
		    ans += (x + dif - 1)/dif;
	    }
	    
	    cout << ans << endl;
	    

    }

    return 0;
}

