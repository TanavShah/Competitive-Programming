//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;
long long c = 0;
long long method(long long n)
{
    if((n/10) == 0)
    {
	if((n % 10) == 1)
	{
	    return c;
	}
	if((n % 10) == 7)
	{
	    return c+5;
	}
	if((n % 10) == 2)
	{
	    return -1;
	}
	if((n % 10) == 3)
	{
	    return -1;
	}
	if((n % 10) == 4)
	{
	    return -1;
	}
	if((n % 10) == 5)
	{
	    return -1;
	}
	if((n % 10) == 6)
	{
    	    return -1;
	}
	if((n % 10) == 8)
	{
	    return -1;
	}
	if((n % 10) == 9)
	{
	    return -1;
	}
    }
	long long dig = log10(n) + 1;
	long long sum = 0;
	for(long long i = 0 ; i < dig ; i++)
	{
	    sum += pow(((((int)n / (int)(pow(10 , i))) % 10)) , 2);
	}
//	cout << sum << endl;
	c++;
	return method(sum);
}

int main()
{
    long long x;
    scanf("%lld" , &x);
    long long ans = method(x);
    cout << ans << endl;
    return 0;
}
