//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;
//this is wrong
int main()
{
    long long n;
    scanf("%lld" , &n);
    long long inp[n];
    for(int i = 0 ; i < n ; i++)
    {
	scanf("%lld" , &inp[i]);
    }
    long long k;
    scanf("%lld" , &k);
    long long oup[n-k+1] = {0};
    for(long long i = 0 ; i < k ; i++)
    {
	if(inp[i] > oup[0])
	{
	    oup[0] = inp[i];
	}
    }
    for(long long i = k ; i < (n) ; i++)
    {
	if(inp[i] > oup[i-k])
	{
	    oup[i-k+1] = inp[i];
	}
	else
	{
	    oup[i-k+1] = inp[i-k+1];
	    for(long long j = (i-k+1) ; j <= i ; j++)
	    {
		if(inp[j] > oup[i-k+1])
		{
		    oup[i-k+1] = inp[j];
		}
	    }
	}
    }
    for(long long i = 0 ; i < (n-k+1) ; i++)
    {
	cout << oup[i] << " ";
    }
    cout << endl;
    return 0;
}
