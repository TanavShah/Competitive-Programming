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

	ll n;
	cin >> n;
	ll a[n];
	for(ll i = 0 ; i < n ; i++)
		cin >> a[i];

	ll rsum[n] = {0};
	rsum[n - 1] = a[n - 1];
	for(ll i = n - 2 ; i >= 0 ; i--)
	{
		rsum[i] = rsum[i + 1] + a[i];
	}

	ll arr[n];
	for(ll i = 0 ; i < n ; i++)
	{
		if(rsum[i] == 0)
			arr[i] = 0;
		else
			arr[i] = 1;
	}

	for(ll i = 1 ; i < n ; i++)
	{
		for(ll j = i - 1 ; j >= 0 ; j--)
		{
			if(rsum[i] != rsum[j])
			{
				arr[j]++;
			}
		}
	}

	ll ans = 0;
	for(ll i = 0 ; i < n ; i++)
	{
		ans += arr[i];
	}

	cout << ans << endl;

	return  0;
}