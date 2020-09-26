#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll; 

ll binto(string s)
{
	ll ret = 0;
	ll te = 1;
	for(int i = s.length() - 1 ; i >= 0 ; i--)
	{
		ret += te*(s[i] - '0');
		te *= 2;
	}
	return ret;
}

int main()
{

	#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt" , "w" , stdout);
	#endif


	int t;
	cin >> t;
	while(t--)
	{
		ll n,m;
		cin >> n >> m;

		ll ch = pow(2, m - 1);
		ll ans = ch;

		int le = 0, mo = 0, ifch = 0;

		ll arr[n];

		for(int i = 0 ; i < n ; i++)
		{
			string inp;
			cin >> inp;

			ll toin = binto(inp); //to int
			arr[i] = toin;

			if(toin < ch)
			{
				ans--;
				if(ans == toin)
					ans--;
			}
			if(toin > ch)
			{
				ans++;
				if(ans == toin)
					ans++;
			}
			if(toin == ch)
				ans++;
		}


		cout << ans << endl;


	}

	return  0;
}