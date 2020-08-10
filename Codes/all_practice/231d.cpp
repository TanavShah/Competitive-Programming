//		    Su Saheb?      

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

int main()
{
    ll x,y,z;
    cin >> x >> y >> z;

    ll x1,y1,z1;
    cin >> x1 >> y1 >> z1;

    ll a[7] = {0};
    for(ll i = 1 ; i < 8 ; i++)
	cin >> a[i];

    ll ans = 0;
    if(y < 0)
	ans += a[1];

    if(z < 0)
	ans += a[3];

    if(x < 0)
	ans += a[5];

    if(y > y1)
	ans += a[2];

    if(z > z1)
	ans += a[4];

    if(x > x1)
	ans += a[6];

    cout << ans << endl;

    return 0;
}

