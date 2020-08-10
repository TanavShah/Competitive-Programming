//		    Su Saheb?      

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

ll ans = 0;

ll gcd(ll a, ll b)
{
    if(b == 1)
    {
	ans++;
	return a;
    }

    ans++;
    return gcd(b, a % b);
}

int main()
{
    ll a,b;
    cin >> a >> b;
    ans += (a/b);

    if(a % b == 0)
    {
	cout << ans << endl;
	return 0;
    }

    gcd(a, b);    
    cout << ans << endl;

    return 0;
}

