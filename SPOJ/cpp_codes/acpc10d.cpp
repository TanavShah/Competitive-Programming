//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;
    
int main()
{
    for(long long aa = 1 ; ; aa++)
    { 
	long long n;
	scanf("%lld" , &n);
	if(n == 0)
	{
	    break;
	}
	long long inp[n][3];
	for(long long i = 0 ; i < n ; i++)
	{
	    for(long long j = 0 ; j < 3 ; j++)
	    {
		scanf("%lld" , &inp[i][j]);
	    }
	}
        if(n >= 3)
	{	
        for(int j = 0 ; j < 3 ; j++)
	{
	    inp[n-2][j] += inp[n-1][1];
	}
	for(long long i = n - 3 ; i > 0 ; i--)
	{
	    inp[i][0] += min(inp[i + 1][0] , inp[i + 1][1]);
	    inp[i][1] += min(inp[i + 1][2] , min(inp[i + 1][0] , inp[i + 1][1]));
	    inp[i][2] += min(inp[i + 1][2] , inp[i + 1][1]);
	}
	int flag1 = 0 , flag2 = 0;
	if(inp[0][0] >= 0)
	{
	    flag1 = 1;
	}
	if(inp[0][2] >= 0)
	{
	    flag2  = 1;
	}
	if(flag1 == 0)
	{
	    inp[0][0] += min(inp[1][0] , inp[1][1]);
	}
	if(flag2 == 0)
	{
	    inp[0][2] += min(inp[1][1] , inp[1][2]);
	}
      	if((inp[0][0] <= 0) && (inp[0][2] >= 0))
	{
	    inp[0][1] += inp[0][0];
	}
        if((inp[0][0] >= 0) && (inp[0][2] <= 0))
	{
	    inp[0][1] += inp[0][2];
	}
    	if((inp[0][0] <= 0) && (inp[0][2] <= 0))
	{
	    inp[0][1] += min(inp[0][0] , inp[0][2]);
	}
	if((inp[0][0] >= 0) && (inp[0][2] >= 0))
	{
	    inp[0][1] += min(inp[1][0] , min(inp[1][1] , inp[1][2]));
	}
	}
	else
	{
	    inp[0][1] += inp[1][1];
            if((inp[0][0] < 0) || (inp[0][2] < 0))
	    {
		inp[0][1] += min(inp[0][0] , inp[0][2]);
	    }	    
	}
	long long ans = inp[0][1];
	cout << aa << ". " << ans << endl;
    }
    return 0;
}
