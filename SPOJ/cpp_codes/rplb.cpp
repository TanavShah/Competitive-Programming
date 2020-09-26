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

long long met(long long x , long long a[] , long long lim)
{
    long long dp[x + 2][lim + 1];

    for(long long i = 0 ; i <= x + 1 ; i++)
    {
	for(long long w = 0 ; w <= lim ; w++)
	{
	    if(i == 0 or w == 0 or i == 1 or w == 1)
	    {
		dp[i][w] = 0;
	    }
	    else if(a[i - 2] <= w)
	    {
		dp[i][w] = max(a[i - 2] + dp[i - 2][w - a[i - 2]] , dp[i - 1][w]);
	    }
	    else
	    {
		dp[i][w] = dp[i - 1][w];
	    }
	}
    }

    return dp[x + 1][lim];
}

int main()
{
    int t;
    scanf("%d" , &t);
    int cnt = 1;
    while(t--)
    {
	int n,k;
	scanf("%d %d" , &n , &k);
	long long arr[n];
	for(int i = 0 ; i < n ; i++)
	{
	    scanf("%lld" , &arr[i]);
	}
	long long ans = met(n , arr , k);
	printf("Scenario #%d: %lld\n" , cnt , ans);
	cnt++;
    }
    return 0;
}

