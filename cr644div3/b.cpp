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
		int n;
		cin >> n;
		ll arr[n];
		for(int i = 0 ; i < n ; i++)
			cin >> arr[i];

		sort(arr, arr + n);

		ll ans = INT_MAX;

		for(int i = 1 ; i < n ; i++)
		{
			ans = min(ans, arr[i] - arr[ i - 1]);
		}
		cout << ans << endl;
	}



	return  0;
}