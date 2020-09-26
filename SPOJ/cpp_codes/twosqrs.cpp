//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool check(long long z)
{
    if(z == 1)
    {
	return true;
    }
    double p = sqrt((8*z) - 15);
    p = p - 1;
    p = (p/2);
    cout << " val = " << p << endl;
    if(p == (int)p)
    return true;
    return false;
}

bool issquare(long long y)
{
    double s = sqrt(y);
    long long z = sqrt(y);
    return((s - z) == 0);
}

bool isprime(long long m)
{
    if(m <= 1)
    {
	return false;
    }
    else
    {
	for(long long i = 2 ; i <= sqrt(m) ; i++)
	{
	    if((m % i) == 0)
	    {
		return false;
	    }
	}
    }
    return true;
}

bool method(long long x)
{
    if(x == 2)
    {
	return true;
    }
    if(x == 0)
    {
	return true;
    }
          
    if((x % 4) == 1)
    {
	if(((x % 5) == 0) || (issquare(x)) || (isprime(x)))
	{
	    return true;
	}
    }
    if((x % 4) == 0)
    {
	return method(x/4);
    }
    if((x % 4) == 2)
    {
	if((x % 8) == 2)
	{
	    long long w = x/8;
	    if(check(w))
	    {
		return true;
	    }
	}
    }
    return false;
}

int main()
{
    int t;
    scanf("%d" , &t);
    for(int aa = 0 ; aa < t ; aa++)
    {
	long long n;
	scanf("%lld" , &n);
	bool ans = method(n);
	if(ans)
	{
	    printf("%s\n" , "Yes");
	}
	else
	{
	    printf("%s\n" , "No");
	}
    }
    return 0;
}
