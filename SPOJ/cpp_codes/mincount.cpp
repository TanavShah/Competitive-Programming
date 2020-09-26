//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long t;
    scanf("%lld" , &t);
    while(t--)
    {
	long long n;
	scanf("%lld" , &n);
	long long ans = (n*(n + 1))/6;
	printf("%lld \n" , ans);
    }
    return 0;
}

