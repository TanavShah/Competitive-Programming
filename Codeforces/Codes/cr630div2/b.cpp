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

	int primes[] = {2,3,5,7,11,13,17,19,23,29,31};

	ll t;
	cin >> t;
	while(t--)
	{

		ll n;
		cin >> n;
		ll arr[n];		
		for(ll i = 0 ; i < n ; i++)
			cin >> arr[i];

		int col[n] = {0};
		int colour = 1;
		for(int i = 0 ; i < 11 ; i++)
		{
			int flag = 0;
			for(int j = 0 ; j < n ; j++)
			{
				if(col[j] == 0)
				{
					if(arr[j] % primes[i] == 0)
					{
						flag = 1;
						col[j] = colour;
					}
				}
			}

			if(flag)
				colour++;
		}

		cout << colour - 1 << endl;
		for(int i = 0 ; i < n ; i++)
			cout << col[i] << " ";
		cout << endl;
	}


	return  0;
}