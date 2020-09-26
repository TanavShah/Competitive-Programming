//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    for(long long aa = 0 ; ; aa++)
    {
	long long n;
	scanf("%lld" , &n);
	if(n == 0)
	{
	    break;
	}
	long long c[n] , p[n];
	for(long long i = 0 ; i < n ; i++)
	{
	    scanf("%lld" , &c[i]);
	}
	for(long long i = 0 ; i < n ; i++)
	{
	    scanf("%lld" , &p[i]);
	}
	sort(c , c + n);
	sort(p , p + n);
	long long ans = 0;
	for(long long i = 0 ; i < n ; i++)
	{
	    ans += c[i]*p[n - i - 1];
	}
	printf("%lld \n" , ans);
    }
    return 0;
}

