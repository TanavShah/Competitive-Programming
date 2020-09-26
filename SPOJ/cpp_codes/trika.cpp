//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    scanf("%d %d" , &n , &m);
    int x,y;
    scanf("%d %d" , &x , &y);
    --x;
    --y;
    int arr[n][m];
    for(int i = 0 ; i < n ; i++)
    {
	for(int j = 0 ; j < m ; j++)
	{
	    scanf("%d" , &arr[i][j]);
	}
    }
    int dp[n][m];
    memset(dp , 0 , sizeof(dp));
    dp[n - 1][m - 1] = arr[n - 1][m - 1];
    for(int i = n - 2 ; i >= 0 ; i--)
    {
	dp[i][m - 1] = arr[i][m - 1] + dp[i + 1][m - 1];
    }
    for(int j = m - 2 ; j >= 0 ; j--)
    {
	dp[n - 1][j] = arr[n - 1][j] + dp[n - 1][j + 1];
    }
    for(int i = n - 2 ; i >= 0 ; i--)
    {
	for(int j = m - 2 ; j >= 0 ; j--)
	{
	    dp[i][j] = arr[i][j] + min(dp[i + 1][j] , dp[i][j + 1]);
	}
    }
    int ans = dp[x][y];
    ans -= arr[x][y];
    ans = arr[x][y] - ans;
    if(x == n - 1 and y == m - 1)
    {
	ans = 0;
    }
    if(ans >= 0)
    {
	printf("Y %d\n" , ans);
    }
    else
    {
	printf("N\n");
    }
    return 0;
}

