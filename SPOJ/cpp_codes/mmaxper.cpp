//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long long max(long long a , long long b)
{
    if(a > b)
	return a;
	return b;
}

int main()
{
    int n;
    scanf("%d" , &n);
    int ab[n][2];
    for(int i = 0 ; i < n ; i++)
    {
	scanf("%d %d"  , &ab[i][0] , &ab[i][1]);
    }
    long long dp[n][2];
    dp[0][0] = ab[0][0];
    dp[0][1] = ab[0][1];
    for(int i = 1 ; i < n ; i++)
    {
	dp[i][0] = max((dp[i - 1][0] + abs(ab[i][1] - ab[i - 1][1]) + ab[i][0]) , (dp[i - 1][1] +	abs(ab[i][1] - ab[i - 1][0]) + ab[i][0]));

	dp[i][1] = max((dp[i - 1][0] + abs(ab[i][0] - ab[i - 1][1]) + ab[i][1]) , (dp[i	- 1][1] + abs(ab[i][0] - ab[i - 1][0]) + ab[i][1]));

    }
    cout << max(dp[n - 1][0] , dp[n - 1][1]) << endl;;
    return 0;
}

