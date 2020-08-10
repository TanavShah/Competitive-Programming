//		    Su Saheb?      

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

int main()
{
    ll a,b,c,d;
    cin >> a >> b >> c >> d;
    ll ans = 0;
    for(ll i = a + b ; i <= b + c ; i++)
    {
	if(i > c and i <= d)
	    ans += ((i - c)*(min(b, i - b) - max(a, i - c) + 1));
	if(i > d)
	{
 	    ans += ((d - c + 1)*(min(b, i - b) - max(a, i - c) + 1));   
	}
    }

    cout << ans << endl;

    return 0;
}

