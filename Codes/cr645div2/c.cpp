#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll; 

int main()
{

	#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt" , "w" , stdout);
	#endif

	ll t;
	cin >> t;
	while(t--)
	{
		ll x1,y1,x2,y2;
		cin >> x1 >> y1 >> x2 >> y2;

		if(x1 == x2 or y1 == y2)
		{
			cout << 1 << endl;
			continue;
		}

		ll xgap = x2 - x1;
		ll ygap = y2 - y1;

		ll ans = xgap*ygap + 1;

		cout << ans << endl;
	}


	return  0;
}