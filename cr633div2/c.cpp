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
		ll arr[n];
		for(ll i = 0 ; i < n ; i++)
			cin >> arr[i];

		ll x = 0;

		for(ll i = 1 ; i < n ; i++)
		{
			if(arr[i] - arr[i - 1] >= 0)
				continue;

			// if(arr[i - 1] - arr[i] < (pow(2,x)))
			// {
			// 	continue;
			// }

			ll dif = arr[i - 1] - arr[i];
			ll ind = log2(dif) + 1;
			x = max(x,ind);
			arr[i] = arr[i - 1];

		}

		cout << x << endl;
	}


	return  0;
}