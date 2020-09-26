#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007 


long long sieve[1000005];

long long big(long long a , long long b)
{
	return (a > b) ? a : b;
}

int power(int x, unsigned int y, int p) 
{ 
    int res = 1;      
    x = x % p;  
    while (y > 0) 
    { 
        if (y & 1) 
            res = (res*x) % p; 
        y = y>>1;
        x = (x*x) % p;   
    } 
    return res; 
} 

long long KnapSack(long long val[], long long wt[], long long n, long long W) 
{ 
    long long dp[W+1]; 
    memset(dp, 0, sizeof(dp)); 
    for(long long i=0; i < n; i++)  
        for(long long j=W; j>=wt[i]; j--) 
            dp[j] = big(dp[j] , val[i] + dp[j-wt[i]]); 
    return dp[W]; 
} 

long long lcs( char *X, char *Y, long long m, long long n )  
{  
    long long L[m + 1][n + 1];  
    long long i, j;  
      
    
    for (i = 0; i <= m; i++)  
    {  
        for (j = 0; j <= n; j++)  
        {  
        if (i == 0 || j == 0)  
            L[i][j] = 0;  
      
        else if (X[i - 1] == Y[j - 1])  
            L[i][j] = L[i - 1][j - 1] + 1;  
      
        else
            L[i][j] = big(L[i - 1][j], L[i][j - 1]);  
        }  
    }  
          
    return L[m][n];  
}  

void SieveOfEratosthenes() 
{ 
    for(long long i = 2 ; i < 1000005 ; i++)
    {
    	sieve[i] = 1;
    }

  	sieve[1] = 0;
    for (long long p = 2 ; p < 1000005 ; p++) 
    { 
    	for (long long i = 2*p ; i < 1000005 ; i += p) 
    	{
            sieve[i] += p; 
    	}
    } 
} 






























int main()
{

	#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt" , "w" , stdout);
	#endif


	int t;
	scanf("%d" , &t);
	SieveOfEratosthenes();
	long long arr[t];
	long long maxi = 0;
	for(int i = 0 ; i < t ; i++)
	{
		scanf("%lld" , &arr[i]);
		if(arr[i] > maxi)
			maxi = arr[i];
	}

	maxi = big(maxi , 5);
	long long ans[maxi + 1];
	ans[0] = 0;
	ans[1] = 0;

	for(int i = 2 ; i <= maxi ; i++)
	{
		ans[i] = ans[i - 1] + sieve[i];
	}



	for(int i = 0 ; i < t ; i++)
	{
		printf("%lld \n" , ans[arr[i]]);
	}

	return  0;
}