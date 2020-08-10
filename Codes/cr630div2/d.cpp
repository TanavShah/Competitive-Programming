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


	int n,m;
	cin >> n >> m;
	int arr[n][m];
	for(int i = 0 ; i < n ; i++)
	{
		for(int j = 0 ; j < m ; j++)
		{
			cin >> arr[i][j];
		}
	}

	int dp[n+1][m+1];
	memset(dp,0,sizeof(dp));

	dp[0][1] = arr[0][0];
	for(int i = 1 ; i <= n ; i++)
	{
		for(int j = 1 ; j <= m ; j++)
		{
			if(dp[i-1][j] & arr[i-1][j-1]&arr[n-1][m-1] > dp[i][j - 1] & arr[i-1][j-1]&arr[n-1][m-1])
			{
				dp[i][j] = 	dp[i-1][j] & arr[i-1][j-1];
			}
			else
				dp[i][j] = 	dp[i][j-1] & arr[i-1][j-1];	
			//dp[i][j] = max(dp[i-1][j] & arr[i-1][j-1]&arr[n-1][m-1], dp[i][j - 1] & arr[i-1][j-1]&arr[n-1][m-1]);
			
		}

	}

	int dp1[n+1][m+1];	
	memset(dp1,0,sizeof(dp1));

	dp1[0][1] = arr[0][0];
for(int i = 1 ; i <= n ; i++)
	{
		for(int j = 1 ; j <= m ; j++)
		{
			
			dp1[i][j] = max(dp1[i-1][j] & arr[i-1][j-1], dp1[i][j - 1] & arr[i-1][j-1]);
			
		}
	}

	cout << dp[n][m] -dp1[n][m]<< endl;


	return  0;
}