//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int n;
int inp[2000];
int dp[2001][2001];

double method(int st, int en)
{
    if(st > en)
    {
	return 0;
    }
    else
    {
	if(dp[st][en] != -1)
	{
	    return dp[st][en];
	}
	else
	{
	    int age = n + st - en;
	    return dp[st][en] = max(((age*inp[st]) + method(st+1,en)) , ((age*inp[en]) +
	    method(st,en-1)));
	}
    }
}

int main()
{
    
    scanf("%d" , &n);
    for(int i = 0 ; i < 2001 ; i++)
    {
	for(int j = 0 ; j < 2001 ; j++)
	{
	    dp[i][j] = -1;
	}
    }
    for(int i = 0 ; i < n ; i++)
    {
	scanf("%d" , &inp[i]);
    }
    cout << method(0,n-1) << endl;
    return 0;
}

