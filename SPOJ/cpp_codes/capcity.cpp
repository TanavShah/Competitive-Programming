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



























	vector <vector<int>> g(100010), gr(100010);

    vector<bool> used;
    vector<int> order, component;

    void dfs1 (int v) {
        used[v] = true;
        for (size_t i=0; i<g[v].size(); ++i)
            if (!used[ g[v][i] ])
                dfs1 (g[v][i]);
        order.push_back (v);
    }

    void dfs2 (int v) {
        used[v] = true;
        component.push_back (v);
        for (size_t i=0; i<gr[v].size(); ++i)
            if (!used[ gr[v][i] ])
                dfs2 (gr[v][i]);
    }


int main()
{

	#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt" , "w" , stdout);
	#endif


	int n,m;
	scanf("%d %d" , &n , &m);
	//cout << n << " " << m << endl;
	for(int i = 0 ; i < m ; i++)
	{
		int a ,b;
		scanf("%d %d" , &a , &b);
		a--;
		b--;
		g[a].push_back(b);
        gr[b].push_back(a);
	}

	//cout << -1 << endl;

	used.assign (n, false);
        for (int i=0; i<n; ++i)
            if (!used[i])
                dfs1 (i);

           // cout << 0 << endl;
        used.assign (n, false);
        for (int i=0; i<n; ++i) 
        {
            int v = order[n - i - 1];
            if (!used[v]) 
            {
                dfs2 (v);
                for(int j = 0 ; j < component.size() ; j++)
                {
                	cout << component[j] << " ";
           		}
      //     		cout << 1 << endl;
                cout << endl;
                component.clear();
            }
        }

	return  0;
}