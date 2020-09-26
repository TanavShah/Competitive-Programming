//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<long long> method(long long n)
{
    vector<long long> v(n + 1 , 0);
    vector<long long> res(n + 1 , 0);
    res[0] = 0;
    res[1] = 0;
    v[1] = 1;
    for(long long i = 2 ; i <= n ; i++)
    {
	if(v[i] == 0)
	{
	    v[i] = i;
	    for(long long j = i*i ; j <= n ; j += i)
	    {
		if(v[j] == 0)
		{
		    v[j] = i;
		}
	    }
	}
	res[i] = res[i - 1] + v[i];
    }
    return res;
}

int main()
{
    int t;
    scanf("%d" , &t);
    long long inp[t];
    for(int i = 0 ; i < t ; i++)
    {
	scanf("%lld" , &inp[i]);
    }
    long long max = inp[0];
    for(int i = 0 ; i < t ; i++)
    {
	if(inp[i] > max)
	{
	    max = inp[i];
	}
    }
//    vector<long long> op (max + 1 , 0);
    vector<long long> prime;
    prime = method(max);
    /*
    op[0] = 0;
    op[1] = 0;
    for(long long i = 2 ; i <= max ; i++)
    {
	if((i % 2) == 0)
	{
	    op[i] = op[i - 1] + 2;
	}
	else
	{
	    op[i] = op[i - 1] + prime[i];
	}    
    }
    */
    for(int i = 0 ; i < t ; i++)
    {
	printf("%lld \n" , prime[inp[i]]);
    }
    return 0;
}
