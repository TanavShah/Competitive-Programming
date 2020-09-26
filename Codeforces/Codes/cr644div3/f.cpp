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
		int n,m;
		cin >> n >> m;
		string inp[n];
		for(int i = 0 ; i < n ; i++)
			cin >> inp[i];

		if(n == 1)
		{
			cout << inp[0] << endl;
			continue;
		}

		char ans[m];

		for(int i = 0 ; i < m ; i++)
		{
			ans[i] = '0';
		}

		int cnt = 0;

		for(int j = 0 ; j < m ; j++)
		{
			bool ch = 1;
			for(int i = 1 ; i < n ; i++)
			{
				if(inp[i][j] != inp[0][j])
				{
					ch = 0;
					break;
				}
			}

			if(ch)
			{
				ans[j] = inp[0][j];
				cnt++;
			}
		}

		if(cnt == m)
		{
			for(int i = 0 ; i < m; i++)
			{
				cout << ans[i];
			}
			cout << endl;
			continue;
		}

		int found = 0;

		for(int j = 0 ; j < m ; j++)
		{
			if(ans[j] != '0')
				continue;

			string temp = inp[0];
			int pos = -1;

			vector<int> ind;

			for(int i = 0 ; i < n ; i++)
			{
				if(inp[i][j] != inp[0][j])
				{
					// pos = i;
					ind.push_back(i);
				}
			}

			int fl = 0;
			for(int k = 0 ; k < n ; k++)
			{
				fl = 0;
				if(k == 0)
				{
					temp = inp[1];
				}

			temp[j] = inp[k][j];

			
			for(int i = 0 ; i < n ; i++)
			{
				int ano = 0;
				for(int j = 0 ; j < m ; j++)
				{
					if(inp[i][j] != temp[j])
					{
						ano++;
					}
				}

				if(ano >= 2)
				{
					fl = 1;
					break;
				}
			}

			if(fl == 0)
				break;
		}

			if(fl == 0)
			{
				found = 1;
				for(int j = 0 ; j < m ; j++)
				{
					ans[j] = temp[j];
				}
				break;
			}

		}

		if(found == 1)
		{
			for(int i = 0 ; i < m;  i++)
			{
				cout << ans[i];
			}
			cout << endl;
		}
		else
		{
			cout << -1 << endl;
		}
	}


	return  0;
}