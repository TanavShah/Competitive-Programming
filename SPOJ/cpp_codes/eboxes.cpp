//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long tc;
    scanf("%lld" , &tc);
    for(long long aa = 0 ; aa < tc ; aa++)
    {
	long long n,k,t,f;
	scanf("%lld %lld %lld %lld" , &n , &k , &t , &f);
	long long ans = ((f*k) - n)/(k - 1);
	printf("%lld \n" , ans);
    }
    return 0;
}
