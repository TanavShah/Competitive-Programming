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
	ll x,n,m;
	cin >> x >> n >> m;
    
	if(x <= 10*m)
	{
	    cout << "YES" << endl;
	    continue;
	}

	for(ll i = 0 ; i < n ; i++)
	{
	    if(x < 19)
		break;

	    x = (x/2) + 10;
	}

	for(ll i = 0 ; i < m ; i++)
	{
	    x -= 10;
	}

	if(x <= 0)
	    cout << "YES" << endl;
	else
	    cout << "NO" << endl;
    }
    return 0;
}

