//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

map<long long , long long> fact;

long long method(long long var)
{
    while((var % 2) == 0)
    {
	fact[2]++;
	var = var / 2;
    }
    for(long long i = 3 ; i <= sqrt(var) ; i += 2)
    {
	while((var % i) == 0)
	{
	    fact[i]++;
	    var = var/i;
	}
    }
    if(var > 2)
    {
	fact[var]++;
    }
    long long ans = 1;
    for(auto i = fact.begin() ; i != fact.end() ; i++)
    {
	ans = ans*((i->second) + 1);
    }
    return ans;
}

long long gcd(long long x, long long y)
{
    if((x % y) == 0)
	return y;
	return gcd(y , x % y);
}

int main()
{
    long long t;
    scanf("%lld" , &t);
    for(long long aa = 0 ; aa < t ; aa++)
    {
	long long m,n;
	scanf("%lld %lld" , &m , &n);
	long long g = gcd(m,n);
	printf("%lld \n" , method(g));
	fact.clear();
    }
    return 0;
}
