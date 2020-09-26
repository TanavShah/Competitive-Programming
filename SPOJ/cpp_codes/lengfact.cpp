//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long long method(long long x)
{
    if(x <= 1)
	return 0;
    long long ret = x*(log10(x / M_E)) + ((log10(2*x*M_PI))/2);
    return ret;
}

int main()
{
    int t;
    scanf("%d" , &t);
    for(int aa = 0 ; aa < t ; aa++)
    {
	long long n;
	scanf("%lld" , &n);
	long long ans = method(n) + 1;
	printf("%lld \n" , ans);
    }
    return 0;
}
