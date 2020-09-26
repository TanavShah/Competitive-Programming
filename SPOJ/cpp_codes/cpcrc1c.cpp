//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long long total(long long x)
{
    long long sum = 0;
    for(long long i = 1 ; i < 10 ; i++)
    {
	sum += (x % 10);
	x = x/10;
    }
    return sum;
}

int main()
{
    for(long long aa = 0 ; ; aa++)
    {
	long long a,b;
	scanf("%lld %lld" , &a , &b);
	if((a == -1) && (b == -1))
	{
	    break;
	}
	long long ans = 0;
	for(long long i = a ; i <= b ; i++)
	{
	    ans += total(i);
	}
	printf("%lld \n" , ans);
    }
    return 0;
}
