//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long long method(long long bits , long long count)
{
    if(count >= bits)
    {
	return 0;
    }
    long long dp[bits + 1][count + 1][2];
    for(int i = 0 ; i <= bits ; i++)
    {
	for(int j = 0 ; j <= count ; j++)
	{
	    dp[i][j][0] = 0;
	    dp[i][j][1] = 0;
	}
    }
    dp[1][0][0] = 1;
    dp[1][0][1] = 1;
    for(int i = 2 ; i <= bits ; i++)
    {
	dp[i][0][0] = dp[i - 1][0][0] + dp[i - 1][0][1];
	dp[i][0][1] = dp[i - 1][0][0];
    }
    for(long long i = 1 ; i <= bits ; i++)
    {
	for(long long j = 1 ; j <= count ; j++)
	{
	    dp[i][j][0] = dp[i - 1][j][0] + dp[i - 1][j][1];
	    dp[i][j][1] = dp[i - 1][j][0] + dp[i - 1][j - 1][1];
	}
    }
    /*
    for(int i = 0 ; i <= bits ; i++)
    {
	for(int j = 0 ; j <= count ; j++)
	{
	    cout << dp[i][j][0] << "," << dp[i][j][1] << " ";
	}
	cout << endl;
    }
    */
    return (dp[bits][count][0] + dp[bits][count][1]);
}

int main()
{
    int t;
    scanf("%d" , &t);
    while(t--)
    {
	long long sno;
	long long n,k;
	scanf("%lld %lld %lld" , &sno , &n , &k);
	long long ans = method(n , k);
	printf("%lld " , sno);
	printf("%lld \n" , ans);
    }
    return 0;
}

