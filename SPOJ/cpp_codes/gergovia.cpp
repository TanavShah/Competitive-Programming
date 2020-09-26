//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    while(1)
    {
	int n;
	scanf("%d" , &n);
	if(n == 0)
	{
	    break;
	}
	int inp[n];
	for(int i = 0 ; i < n ; i++)
	{
	    scanf("%d" , &inp[i]);
	}
	long long work = 0;
	for(int i = 1 ; i <= n ; i++)
	{
	    work += abs(inp[i - 1]);
	    if(i != n)
	    {
		inp[i] += inp[i - 1];
	    }
	}
	printf("%lld \n" , work);
    }
    return 0;
}

