#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007 

int main()
{

	#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt" , "w" , stdout);
	#endif

	string s;
	cin >> s;
	int n = s.length();
	
	map<char,vector<int>> m;

	for(int i = 0 ; i < 26 ; i++)
	{
		for(int j = 0 ; j < n ; j++)
		{
			if(s.at(j) == (char)(i + 'a'))
			{
				m[s.at(j)].push_back(j);
			}
		}
	}

	long long ans = 0;

	for(int i = 0 ; i < 26 ; i++)
	{
		for(int j = 0 ; j < 26 ; j++)
		{
			long long ans1 = 0;
			if(m[(char)(i + 'a')].size() == 0 or m[(char)(j + 'a')].size() == 0)
			{
				continue;
			}

			for(int p1 = 0 ; p1 < m[(char)(i + 'a')].size() ; p1++)
			{
				int temp = upper_bound(m[(char)(j + 'a')].begin(), m[(char)(j + 'a')].end(), m[(char)(i + 'a')][p1]) - m[(char)(j + 'a')].begin() - 1;
				if(temp == -1)
				{
					ans1 += m[(char)(j + 'a')].size();
				}
				else
				{
					ans1 += (m[(char)(j + 'a')].size() - temp - 1);
				}
			}

			if(ans1 > ans)
			{
				ans = ans1;
			}
		}
	}

	for(int i = 0 ; i < 26 ; i++)
	{
		long long temp = m[(char)(i + 'a')].size();
		ans = max(ans, temp);
		temp = (temp*(temp - 1))/2;
		ans = max(ans, temp);
	}

	cout << ans << endl;

	return  0;
}