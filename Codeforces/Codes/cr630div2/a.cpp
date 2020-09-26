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
		ll a,b,c,d;
		cin >> a >> b >> c >> d;
		ll x,y,x1,y1,x2,y2;
		cin >> x >> y >> x1 >> y1 >> x2 >> y2;
		ll hor = max(a,b) - min(a,b);
		ll ver = max(c,d) - min(c,d);
		if(x < x1 or x > x2)
		{
			cout << "No" << endl;
			continue;	
		}

		if(y < y1 or y > y2)
		{
			cout << "No" << endl;
			continue;	
		}
		if(x1 == x2 and (a > 0 or b > 0))
		{
			cout << "No" << endl;
			continue;
		}

		if(y1 == y2 and (c > 0 or d > 0))
		{
			cout << "No" << endl;
			continue;
		}

		if(max(a,b) == a and ((x - hor) < x1))
		{
			cout << "No" << endl;
			continue;
		}

		if(max(a,b) == b and ((x + hor) > x2))
		{
			cout << "No" << endl;
			continue;
		}

		if(max(c,d) == c and ((y - ver) < y1))
		{
			cout << "No" << endl;
			continue;
		}

		if(max(c,d) == d and ((y + ver) > y2))
		{
			cout << "No" << endl;
			continue;
		}

		cout << "Yes" << endl;

	}	


	return  0;
}