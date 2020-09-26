//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;
/*
int method(int a , int b)
{
    if(a == 1)
    {
	return 0;
    }
    return (method(a - 1 , b) + b) % a;
}
*/
int main()
{
    while(1)
    {
	int n,d;
	scanf("%d %d" , &n , &d);
	if((n == 0) && (d == 0))
	{
	    break;
	}
	int dp[1000010] = {0};
	dp[1] = 0;
	for(int i = 2 ; i <= n ; i++)
	{
	    dp[i] = (dp[i - 1] + d) % i;
	}
	int ans = dp[n] + 1;
	printf("%d %d %d\n" , n , d , ans);
    }
    return 0;
}

