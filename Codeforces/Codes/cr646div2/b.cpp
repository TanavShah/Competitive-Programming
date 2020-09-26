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

	int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;

		int n = s.length();
		int cnt[n] = {0};
		int c1[n] = {0};

		if(s.at(0) == '0')
			cnt[0] = 1;

		if(s.at(0) == '1')
			c1[0] = 1;


		for(int i = 1 ; i <n ; i++)
		{
			if(s.at(i) == '0')
			{
				cnt[i] = cnt[i - 1] + 1;
			}
			else
			{
				cnt[i] = cnt[i - 1];
			}
		}

		for(int i = 1 ; i <n ; i++)
		{
			if(s.at(i) == '1')
			{
				c1[i] = c1[i - 1] + 1;
			}
			else
			{
				c1[i] = c1[i - 1];
			}
		}

		ll ans = INT_MAX;

		for(int i = 0 ; i < n ; i++)
		{
			ll temp = 0;
			if(i == 0)
			{
				if(s.at(0) == '0')
					temp = 1;

				temp += (cnt[n - 1]);
				ans = min(ans, temp);
				continue;
			}

			temp = i - cnt[i - 1] + cnt[n - 1] - cnt[i - 1];
			ans = min(ans, temp);
		}

//		cout << ans << endl;

		for(int i = 0 ; i < n ; i++)
		{
			ll temp = 0;
			if(i == 0)
			{
				if(s.at(0) == '1')
					temp = 1;

				temp += (c1[n - 1]);
				ans = min(ans, temp);
				continue;
			}

			temp = i - c1[i - 1] + c1[n - 1] - c1[i - 1];
			ans = min(ans, temp);
		}

		cout << ans << endl;


	}


	return  0;
}