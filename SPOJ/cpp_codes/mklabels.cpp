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




























long long power(long long x, unsigned long long y, long long p) 
{ 
    long long res = 1;      
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

int main()
{

	#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt" , "w" , stdout);
	#endif

int caseno = 1;
while(1)
{
	int n;
	scanf("%d" , &n);
	if(n == 0)
		break;

	long long ans = power(n , n - 2 , MOD);
	cout << "Case " << caseno << ", N = " << n << ", # of different labelings = " << ans << endl; 
	caseno++;
}



	return  0;
}