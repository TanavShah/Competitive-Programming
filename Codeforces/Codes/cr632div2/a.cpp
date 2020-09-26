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
	cin  >> t;
	while(t--)
	{
		int n,m;
		cin >> n >> m;
		char arr[n][m];

		if(n % 2 == 1 and m % 2 == 1)
		{
			for(int i = 0 ; i < n ; i++)
			{
				for(int j = 0 ; j < m ; j++)
				{
					if(j % 2 == 0)
					{
						arr[i][j] = 'B';
					}
					else
						arr[i][j] = 'W';
				}
			}

			for(int i = 0 ; i < n ; i++)
			{
				if(i % 2 == 0)
				{
					arr[i][m - 1] = 'B';
				}
				else
					arr[i][m - 1] = 'W';
			}
		}

		if(n % 2 == 1 and m % 2 == 0)
		{
			for(int i = 0 ; i < n ; i++)
			{
				for(int j = 0 ; j < m ; j++)
				{
					if((i + j) % 2 == 0)
					{
						arr[i][j] = 'B';
					}
					else
						arr[i][j] = 'W';
				}
			}

			arr[0][m - 1] = 'B';
		}

		if(n % 2 == 0 and m % 2 == 1)
		{
			for(int i = 0 ; i < n ; i++)
			{
				for(int j = 0 ; j < m ; j++)
				{
					if((i + j) % 2 == 0)
					{
						arr[i][j] = 'B';
					}
					else
						arr[i][j] = 'W';
				}
			}

			arr[n - 1][m - 1] = 'B';
		}

		if(n % 2 == 0 and m % 2 == 0)
		{
			for(int i = 0 ; i < n ; i++)
			{
				for(int j = 0 ; j < m ; j++)
				{
					if(j % 2 == 0)
					{
						arr[i][j] = 'B';
					}
					else
						arr[i][j] = 'W';
				}
			}

			arr[0][m - 2] = 'B';
			for(int i = 1 ; i < n ; i++)
			{
				arr[i][m - 2] = 'W';
			}

			for(int i = 0 ; i < n ; i++)
			{
				arr[i][m - 1] = 'B';
			}
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


	return  0;
}