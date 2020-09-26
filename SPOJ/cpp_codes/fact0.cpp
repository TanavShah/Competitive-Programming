//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

map<long long , long long> fac;

void findfactors(long long n)
{
    while((n % 2) == 0)
    {
	fac[2]++;
	n = n/2;
    }
    for(long long i = 3 ; i <= sqrt(n) ; i += 2)
    {
	while((n % i) == 0)
	{
	    fac[i]++;
	    n = n/i;
	}
    }
    if(n > 2)
    {
	fac[n]++;
    }

}

int main()
{
    while(1)
    {
	long long t;
	scanf("%lld" , &t);
	if(t == 0)
	{
	    break;
	}
	findfactors(t);
	for(auto i = fac.begin() ; i != fac.end() ; i++)
	{
	    printf("%lld^%lld " , i -> first , i -> second);
	}
	printf("\n");
	fac.clear();
    }

    return 0;
}

