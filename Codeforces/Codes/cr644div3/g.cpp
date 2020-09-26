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
		int n,m,a,b;
		cin >> n >> m >> a >> b;

		if(m*b != n*a)
		{
			cout << "NO" << endl;
			continue;
		}

		cout << "YES" << endl;

		int arr[n][m];
		for(int i = 0 ; i < n ; i++)
		{
			for(int j = 0 ; j < m ; j++)
			{
				arr[i][j] = 1;
			}
		}

		if(a == m)
		{
			for(int i = 0 ; i < n ; i++)
			{
				for(int j = 0 ; j < m ; j++)
				{
					cout << arr[i][j];
				}
				cout << endl;
			}
		}
		else
		{
			int st = 0;
			int num = m - a;
			for(int i = 0 ; i < n ; i++)
			{
				int cnt = 0;
				int j;
				for(j = st ; cnt < num ; j = (j + 1) % m)
				{
					arr[i][j] = 0;
					cnt++;
				}
				st = j;
			}

			for(int i = 0 ; i < n ; i++)
			{
				for(int j = 0 ; j < m ; j++)
				{
					cout << arr[i][j];
				}
				cout << endl;
			}	
		}

		


	}


	return  0;
}