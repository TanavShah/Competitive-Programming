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

		sort(arr, arr + n);

		ll ans[n];

		if(n % 2)
		{
			ll st = n/2;
			ans[0] = arr[st];
			ll d1 = abs(arr[st + 1] - ans[0]);
			ll d2 = abs(arr[st - 1] - ans[0]);

			int fl = 0;

			if(d1 > d2)
			{
				ans[1] = arr[st - 1];
				ans[2] = arr[st + 1];
				fl = 1;
			}
			else
			{
				ans[1] = arr[st + 1];
				ans[2] = arr[st - 1];
			}

			if(fl == 1)
			{
			for(ll i = 2 ; i <= st ; i++)
			{
				ans[2*i - 1] = arr[st - i];
				ans[2*i] = arr[st + i];
			}
		}
		else
		{
			for(ll i = 2 ; i <= st ; i++)
			{
				ans[2*i] = arr[st - i];
				ans[2*i - 1] = arr[st + i];
			}
		}

			
		}
		else
		{
			ans[0] = arr[n/2 - 1];
			ans[1] = arr[n/2];

			ll d1 = abs(arr[n/2 + 1] - ans[1]);
			ll d2 = abs(ans[0] - ans[1]);

			int fl = 0;

			if(d1 < d2)
			{
				ans[2] = arr[n/2 - 2];
				ans[3] = arr[n/2 + 1];
				fl = 1;
			}
			else
			{
				ans[2] = arr[n/2 + 1];
				ans[3] = arr[n/2 - 2];
			}

			if(fl == 1)
			{
				for(ll i = 3 ; i <= (n/2) ; i++)
				{
					ans[2*i - 2] = arr[n/2 - i];
					ans[2*i - 1] = arr[n/2 + i - 1];
				}
			}
			else
			{
				for(ll i = 3 ; i <= (n/2) ; i++)
				{
					ans[2*i - 1] = arr[n/2 - i];
					ans[2*i - 2] = arr[n/2 + i - 1];
				}	
			}
		}

		for(ll i = 0 ; i < n ; i++)
		{
			cout << ans[i] << " ";
		}
		cout << endl;
	}


	return  0;
}