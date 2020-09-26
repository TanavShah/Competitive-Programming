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
    int t;
    scanf("%d" , &t);
    while(t--)
    {
	int n;
	scanf("%d" , &n);
	long long A[100010];
	memset(A , 0 , sizeof(A));
	for(int i = 0 ; i < n ; i++)
	{
	    scanf("%lld" , &A[i]);
	}
	long long dp[100010];
	memset(dp , 0 , sizeof(dp));
	for(int i = n - 1 ; i >= 0 ; i--)
	{
	    dp[i]=max(A[i] + dp[i+2] , max(A[i] + A[i+1] + dp[i+4] , A[i] + A[i+1] + A[i+2] + dp[i+6]));
	}
	cout << dp[0] << endl;
    }
    return 0;
}

