//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    while(1)
    {
	int n,t;
	scanf("%d %d" , &n , &t);
	if(n == 0 and t == 0)
	{
	    break;
	}

	int time[n][n];
	for(int i = 0 ; i < n ; i++)
	{
	    for(int j = 0 ; j < n ; j++)
	    {
		scanf("%d" , &time[i][j]);
	    }
	}
//	cout << endl;

 	int toll[n][n];
	for(int i = 0 ; i < n ; i++)
	{
	    for(int j = 0 ; j < n ; j++)
	    {
		scanf("%d" , &toll[i][j]);
	    }
	}
//	cout << endl;
	
	int dp[55][1005];
	dp[0][0] = 0;
	for(int i = 1 ; i <= n ; i++)
	{
	    dp[i][0] = INT_MAX;
	}
	
	int finalt = 0;
	for(int k = 1 ; k <= t ; k++)
	{
	    for(int i = 0 ; i < n ; i++)
	    {
		dp[i][k] = dp[i][k - 1];
		for(int j = 0 ; j < n ; j++)
		{
		    if(k >= time[j][i])
		    {
			dp[i][k] = min(dp[i][k] , dp[j][k - time[j][i]] + toll[j][i]);
		    }
		}
	    }

	    if(dp[n - 1][k] != dp[n - 1][k - 1])
	    {
		finalt = k;
	    }
	}

	printf("%d %d\n" , dp[n - 1][finalt] , finalt);
    }
    return 0;
}

