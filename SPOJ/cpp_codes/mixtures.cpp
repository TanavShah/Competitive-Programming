//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long long dp[105][105];
long long *inp;

long long sum(int b , int f)
{
    long long ret = 0;
    for(int i = b ; i <= f ; i++)
    {
	ret += inp[i];
	ret = ret % 100;
    }
    return ret;
}

long long method(int s , int e)
{
    if(s == e)
    {
	dp[s][e] = 0;
	return 0;
    }
    if(e == (s+1))
    {
	dp[s][e] = inp[s]*inp[e];
	return dp[s][e];
    }
    if(dp[s][e] != -1)
    {
	return dp[s][e];
    }
    long long arr[e-s];
    for(int i = s ; i < e ; i++)
    {
	arr[i-s] = method(s,i) + method(i+1,e) + ((sum(s,i))*sum(i+1,e));
    }
    long long min = arr[0];
    for(int i = 0 ; i < (e-s) ; i++)
    {
	if(arr[i] < min)
	{
	    min = arr[i];
	}
    }
    dp[e][s] = min;
    return dp[e][s];
}

int main()
{
    long long n;
    while(scanf("%lld" , &n) != EOF)
    {
	inp = new long long[n];
	for(int i = 0 ; i < n ; i++)
	{
	    scanf("%lld" , &inp[i]);
	}
	for(int i = 0 ; i < 105 ; i++)
	{
	    for(int j = 0 ; j < 105 ; j++)
	    {
		dp[i][j] = -1;
	    }
	}
	long long ans = method(0,n-1);
	cout << ans << endl;
	}
    return 0;
}
