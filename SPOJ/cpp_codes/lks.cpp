#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007 

int big(int a , int b)
{
	return (a > b) ? a : b;
}

int KnapSack(int val[], int wt[], int n, int W) 
{ 
    int dp[W+1]; 
    memset(dp, 0, sizeof(dp)); 
    for(int i=0; i < n; i++)  
        for(int j=W; j>=wt[i]; j--) 
            dp[j] = max(dp[j] , val[i] + dp[j-wt[i]]); 
    return dp[W]; 
} 

int main()
{

	#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt" , "w" , stdout);
	#endif


	int k,n;
	scanf("%d %d" , &k , &n);
	int v[n] , w[n];
	for(int i = 0 ; i < n ; i++)
	{
		scanf("%d %d" , &v[i] , &w[i]);
	}

	printf("%d\n" , KnapSack(v , w , n , k));

	return  0;
}