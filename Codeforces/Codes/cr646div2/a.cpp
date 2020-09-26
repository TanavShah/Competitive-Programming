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
		ll n,x;
		cin >> n >> x;
		ll od = 0, ev = 0;

		for(ll i = 0 ; i < n ; i++)
		{
			ll temp;
			cin >> temp;
			if(temp % 2 == 1)
				od++;
			else
				ev++;
		}

		if(x % 2 == 0 and ev == 0)
		{
			cout << "NO" << endl;
			continue;
		}


		if(od % 2 == 1)
		{
			ev += (od - 1);
			od = 1;
		}

		else if((od % 2 == 0) and (od != 0))
		{
			ev += (od - 2);
			od = 2;
		}

		if((od >= 1) and (ev >= (x - 1)))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	


	return  0;
}