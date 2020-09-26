//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long long dp[100000];

long long met(int x)
{
    if(x < 0)
	return 0;
    if(dp[x] != -1)
	return dp[x];
    return dp[x] = met(x - 1) + 5*met(x - 2) + met(x - 3) - met(x - 4);	
}

int main()
{
    int t;
    scanf("%d" , &t);
    memset(dp , -1 , sizeof(dp));
    dp[0] = 1;
    dp[1] = 5;
    dp[2] = 11;
    dp[3] = 36;
    dp[4] = 95;
    for(int aa = 1 ; aa <= t ; aa++)
    {
	int n;
	scanf("%d" , &n);
	printf("%d %lld\n" , aa , met(n - 1));
    }
    return 0;
}

