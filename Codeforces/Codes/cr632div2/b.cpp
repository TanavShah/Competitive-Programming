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
		ll n;
		cin >> n;
		ll a[n];
		ll b[n];
		ll x[n] = {0};
		ll z[n] = {0};

		for(ll i = 0 ; i < n ; i++)
		{
			cin >> a[i];
			if(i != 0)
			{
				x[i] = x[i - 1];
				z[i] = z[i - 1];

				if(a[i - 1] == 1)
				{
					x[i]++;
				}
				else if(a[i - 1] == -1)
				{
					z[i]++;
				}
			}
		}

		for(ll i = 0 ; i < n ; i++)
		{
			cin >> b[i];
		}

		ll flag = 0;
		if(a[0] != b[0])
		{
			cout << "NO" << endl;
			continue;
		}

		for(ll i = 1 ; i < n ; i++)
		{
			ll temp = b[i] - a[i];
			if(temp > 0 and x[i] == 0)
			{
				flag = 1;
				break;
			}
			if(temp < 0 and z[i] == 0)
			{
				flag = 1;
				break;
			}
		}

		if(flag)
		{
			cout << "NO" << endl;
			continue;	
		}
		else
		{
			cout << "YES" << endl;
			continue;
		}

	}



	return  0;
}