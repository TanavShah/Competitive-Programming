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
    long long n;
    scanf("%lld" , &n);
    long long inp[n];
    long long diff[n-1];
    long long gcdcal[n-1];
    
    for(long long i = 0 ; i < n ; i++)
    {
	scanf("%lld" , &inp[i]);
    }
    
    for(long long i = 0 ; i < n - 1 ; i++)
    {
	diff[i] = inp[i + 1] - inp[i];
	gcdcal[i] = inp[i + 1] - inp[i];
    }
    
    long long res = gcdcal[0];
    for(long long i = 1 ; i < n - 1 ; i++)
    {
	res = gcd(gcdcal[i] , res);
    }

    long long ans = 0;
    for(long long i = 0 ; i < n - 1 ; i++)
    {
	ans += ((diff[i]) / (res));
	ans--;
    }
    printf("%lld \n" , ans);
    return 0;
}

