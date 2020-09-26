//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int knapsack(int W , int wt[] , int val[] , int n)
{
    int i,w;
    int knap[n + 1][W + 1];

    for(int i = 0 ; i <= n ; i++)
    {
	for(int w = 0 ; w <= W ; w++)
	{
	    if((i == 0) || (w == 0))
	    {
		knap[i][w] = 0;
	    }
	    else if(wt[i - 1] <= w)
	    {
		knap[i][w] = max(val[i - 1] + knap[i - 1][w - wt[i - 1]] , knap[i - 1][w]);
	    }
	    else
	    {
		knap[i][w] = knap[i - 1][w];
	    }
	}
    }
    return knap[n][W];
}

int main()
{
    int n;
    scanf("%d" , &n);
    for(int aa = 0 ; aa < n ; aa++)
    {
	int k,m;
	scanf("%d %d" , &k , &m);
	int w[m],v[m];
	for(int i = 0 ; i < m ; i++)
	{
	    scanf("%d %d" , &w[i] , &v[i]);
	}
	int ans = knapsack(k , w , v , m);
	cout << "Hey stupid robber, you can get " << ans << "." << endl;
    }
    return 0;
}

