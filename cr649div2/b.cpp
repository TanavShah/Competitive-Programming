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

		vector<ll> ans;
		ans.push_back(arr[0]);

		for(ll i = 1 ; i < n - 1 ; i++)
		{
			if(!((arr[i] - arr[i - 1] < 0 and arr[i + 1] - arr[i] < 0) or (arr[i] - arr[i - 1] > 0 and arr[i + 1] - arr[i] > 0)))
			{
				ans.push_back(arr[i]);
			}	
		}

		ans.push_back(arr[n - 1]);
		cout << ans.size() << endl;

		for(ll i = 0 ; i < ans.size() ; i++)
		{
			cout << ans[i] << " ";
		}
		cout << endl;
	}


	return  0;
}