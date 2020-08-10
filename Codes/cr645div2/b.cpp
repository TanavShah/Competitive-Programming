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
		map<ll,ll> m;
		for(ll i = 0 ; i < n ; i++)
		{
			ll temp;
			cin >> temp;
			m[temp]++;
		}

		ll in = 1;
		ll temp = 0;

		for(auto i = m.begin() ; i != m.end() ; i++)
		{
			if(in + temp + (i -> second) - 1 >= (i -> first))
			{
				in += (temp + (i -> second));
				temp = 0;
			}
			else
			{
				temp += (i -> second);
			}
		}

		cout <<in << endl;
	}



	return  0;
}