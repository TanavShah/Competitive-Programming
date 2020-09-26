//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k,l;
    long long max = 0;
    scanf("%d %d" , &k , &l);
    int m;
    scanf("%d" , &m);
    long long inp[m];
    for(int i = 0 ; i < m ; i++)
    {
	scanf("%lld" , &inp[i]);
	if(inp[i] > max)
	{
	    max = inp[i];
	}
    }
    int a[1000010];
    a[1] = 1;
    for(int i = 2 ; i <= max ; i++)
    {
	if(a[i - 1] == 0)
	{
	    a[i] = 1;
	}
        if((i >= k) && (a[i - k] == 0))
	{
	    a[i] = 1;
	}
	if((i >= l) && (a[i - l] == 0))
	{
	    a[i] = 1;
	}
    }
    for(int i = 0 ; i < m ; i++)
    {
	if(a[inp[i]] == 1)
	{
	    cout << "A";
	}
	else
	{
	    cout << "B";
	}
    }
    return 0;
}
