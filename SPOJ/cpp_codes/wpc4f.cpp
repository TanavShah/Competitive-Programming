#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007 


long long big(long long a , long long b)
{
	return (a > b) ? a : b;
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

void SieveOfEratosthenes(long long n) 
{ 
    bool prime[n+1]; 
    memset(prime, true, sizeof(prime)); 
  
    for (long long p=2; p*p<=n; p++) 
    { 
        if (prime[p] == true) 
        {   
            for (long long i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
  
    for (long long p=2; p<=n; p++) 
       if (prime[p]) 
          cout << p << " "; 
} 






























int main()
{

	#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt" , "w" , stdout);
	#endif


	int t;
	scanf("%d" , &t);
	while(t--)
	{
		int n;
		scanf("%d" , &n);
		int arr[n][3];
		for(int i = 0 ; i < n ; i++)
		{
			for(int j = 0 ; j < 3 ; j++)
			{
				scanf("%d" , &arr[i][j]);
			}
		}
		
		for(int i = n - 2 ; i >= 0 ; i--)
		{
			arr[i][0] += min(arr[i + 1][1] , arr[i + 1][2]);
			arr[i][1] += min(arr[i + 1][0] , arr[i + 1][2]);
			arr[i][2] += min(arr[i + 1][0] , arr[i + 1][1]);
		}

		int ans = min(arr[0][0] , min(arr[0][1] , arr[0][2]));
		printf("%d \n" , ans);
	}


	return  0;
}