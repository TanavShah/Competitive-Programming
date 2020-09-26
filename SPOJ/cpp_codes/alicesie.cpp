//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long t;
    scanf("%lld" , &t);
    for(long long aa = 0 ; aa < t ; aa++)
    {
	long long n;
	scanf("%lld" , &n);
	long long ans = (n + 1)/2;
	printf("%lld \n" , ans);
    }
    return 0;
}
