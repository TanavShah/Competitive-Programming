//		    Su Saheb?      

#include <bits/stdc++.h>

using namespace std;

#define p 1000000007
typedef long long ll;

ll C[1000010] ={0};

ll power(ll x, ll y) 
{ 
    ll res = 1;
  
    x = x % p;
  
    while (y > 0) 
    { 
        if (y & 1) 
            res = (res*x) % p; 

        y = y>>1;
        x = (x*x) % p; 
    } 
    return res; 
} 
  
ll modInverse(ll n) 
{ 
    return power(n, p-2); 
} 
  
void nCrModPFermat(ll n) 
{  
    C[0] = 1;
    ll fac[n+1]; 
    fac[0] = 1; 
    for (int i=1 ; i<=n; i++) 
        fac[i] = fac[i-1]*i%p; 
    
    for(ll r = 1 ; r <= n ; r++)
    {
	C[r] =  (fac[n]* modInverse(fac[r]) % p * modInverse(fac[n-r]) % p) % p; 
    }
} 

/*
void nCrModp(ll n) 
{ 
    C[0] = 1;
  
    for (ll i = 1; i <= n; i++) 
        for (ll j = i; j > 0; j--) 
            C[j] = (C[j] + C[j - 1]) % MOD; 
} 
*/

int main() {
	
	
	ll a,b,n;
    cin >> a >> b >> n;

	nCrModPFermat(n);
    ll ans = 0;

    for(ll i = 0 ; i <= n ; i++)
    {
		ll sum = i*a + (n - i)*b;
		ll temp = sum;
		bool flag = 1;
		

		while(temp)
		{
		    if(temp % 10 == a or temp % 10 == b)
		    {
				temp /= 10;
				continue;
		    }
	
		    flag = 0;
		    break;
		}
	
		if(flag)
		{
		    ans = (ans + (C[i] % p)) % p;

		}

    }
    
    cout << ans << endl;

	return 0;
}
