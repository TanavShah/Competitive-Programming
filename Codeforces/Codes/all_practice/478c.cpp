//		    Su Saheb?      

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

int main()
{
    ll r,g,b;
    cin >> r >> g >> b;

    ll big = max(r, max(g, b));
    ll sma = min(r, min(g, b));
    ll mid = r + g + b - big - sma;
    ll ans;
    
    if(big >= 2*(sma + mid))
	ans = sma + mid;
    else
	ans = (big + sma + mid)/3;

    cout << ans << endl;

    return 0;
}

