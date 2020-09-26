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
	ll n;
	cin >> n;
	
	ll k = n/2;
	ll ans = 4*k*(k+1)*(k+k+1);
	ans /= 3;
	cout << ans << endl;
    }
    return 0;
}

