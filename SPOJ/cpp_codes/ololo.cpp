//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    scanf("%lld",&n);
    long long arr[n];
    long long ans = 0;
    for(long long i = 0 ; i < n ; i++)
    {
	scanf("%lld", &arr[i]);
	ans = ans ^ arr[i];
    }
    printf("%lld\n" , ans);
    return 0;
}
