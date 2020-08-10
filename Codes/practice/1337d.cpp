//		    Su Saheb?      

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

ll dis(ll x, ll y, ll z)
{
    ll ans = (x - y)*(x - y) + (y - z)*(y - z) + (x - z)*(x - z);
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
	ll nr, ng, nb;
	cin >> nr >> ng >> nb;
	ll r[nr], g[ng], b[nb];
	for(ll i = 0 ; i < nr ; i++)
	    cin >> r[i];

	for(ll i = 0 ; i < ng ; i++)
	    cin >> g[i];

	for(ll i = 0 ; i < nb ; i++)
	    cin >> b[i];

	sort(r, r + nr);
	sort(g, g + ng);
	sort(b, b + nb);
	
	ll ans = 0;

	for(ll i = 0 ; i < nr ; i++)
	{
	    ll posg = lower_bound(g, g + ng, r[i]) - g;
	    ll posg1 = -1;
	    if(upper_bound(g, g + ng, g[posg]) - g != ng)
		posg1 = upper_bound(g, g + ng, g[posg]) - g;

	    ll posb1 = -1, posb2 = -1, posb3 = -1, posb4 = -1;
	    posb1 = lower_bound(b, b + nb, g[posg]) - b;
	    if(upper_bound(b, b + nb, b[posb1]) - b != nb)
		posb2 = upper_bound(b, b + nb, b[posb1]) - b;
	    
	    if(posg1 != -1)
	    {
		posb3 = lower_bound(b, b + nb, g[posg1]) - b;
		if(upper_bound(b, b + nb, b[posb3]) - b != nb)
		    posb4 = upper_bound(b, b + nb, b[posb3]) - b + 1;
	    }
	    
	    ll d1 = dis(r[i], g[posg], b[posb1]);
	    ll d2 = -1, d3 = -1, d4 = -1;
	    if(posb2 != -1)
	    {
		d2 = dis(r[i], g[posg], b[posb2]);
	    }

	    if(posg1 != -1 and posb3 != -1)
	    {
		d3 = dis(r[i], g[posg1], b[posb3]);
	    }

	    if(posg1 != -1 and posb4 != -1)
	    {
		d4 = dis(r[i], g[posg1], b[posb4]);
	    }

	    ans = d1;
	    if(d2 != -1)
		ans = min(ans, d2);

	    if(d3 != -1)
		ans = min(ans, d3);

	    if(d4 != -1)
		ans = min(ans, d4);

	    cout << i << " " << posg << " " << posg1 << endl;
	    cout << i << " " << posb1 << " " << posb2 << " " << posb3 << " " << posb4 << endl;
	}

	cout << ans << endl;

    }
    return 0;
}

