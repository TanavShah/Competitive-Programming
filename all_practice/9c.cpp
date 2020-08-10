//		    Su Saheb?      

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

int main()
{
    ll n;
    cin >> n;
    
    int dig = log10(n) + 1;
    int z = 0;
    while(n)
    {
	if(n % 10 == 0)
	{
	    z++;
	}
	n /= 10;
    }

    ll ans = pow(2, dig - 1) + pow(2, dig - 1 - z) - 1;
    cout << ans << endl;

    return 0;
}

