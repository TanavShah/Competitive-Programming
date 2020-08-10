//		    Su Saheb?      

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

vector<ll> factors;

ll fastexp(ll x, ll y)
{
    ll res = 1;
    x = x % MOD;

    if(x == 0)
	return 0;

    while(y > 0)
    {
	if(y & 1)
	    res = (res*x) % MOD;
	
	y = y >> 1;
	x = (x*x) % MOD;
    }

    return res;
}

void met(ll n)
{
    if(n % 2 == 0)
	factors.push_back(2);
    
    while(n % 2 == 0)
	n /= 2;

    for(ll i = 3 ; i <= sqrt(n) ; i += 2)
    {
	if(n % i == 0)
	    factors.push_back(i);

	while(n % i == 0)
	    n /= i;
    }

    if(n > 2)
	factors.push_back(n);
}

ll calc(ll n, ll p)
{
    ll ret = 0;
    while(n)
    {
	ret += n/p;
	n /= p;
    }
    return ret;
}

int main()
{
    ll x,n;
    cin >> x >> n;
    
    met(x);

    ll ans = 1;
    

    for(ll i = 0 ; i < factors.size() ; i++)
    {
	ll p = factors[i];
	ll ind = calc(n, p);
	ans = ((fastexp(p, ind))*ans) % MOD;
    }

    cout << ans << endl;

    return 0;
}

