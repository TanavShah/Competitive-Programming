//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long long gcd(long long a , long long b)
{
    if(b == 0)
	return a;
	return gcd(b , a % b);
}

int main()
{
    for(long long aa = 0 ; ; aa++)
    {
	long long w,h;
	scanf("%lld %lld" , &w , &h);
	if((w == 0) && (h == 0))
	{
	    break;
	}
	long long ans = ((w*h) / (gcd(w,h)*gcd(w,h)));
	printf("%lld \n" , ans);
    }
    return 0;
}
