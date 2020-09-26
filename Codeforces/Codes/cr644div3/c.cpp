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

		ll odd = 0, ev = 0;
		for(ll i = 0 ; i < n ; i++)
		{
			cin >> arr[i];
			if(arr[i] % 2)
				odd++;
			else
				ev++;
		}

		if(odd % 2 == 0)
		{
			cout << "YES" << endl;
			continue;
		}

		sort(arr, arr + n);

		int ch = 0;
		for(ll i = 1 ; i < n ; i++)
		{
			if(arr[i] == arr[i - 1] + 1)
			{
				ch = 1;
				break;
			}
		}

		if(ch)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;



	}


	return  0;
}