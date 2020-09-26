//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d" , &t);
    for(int aa = 0 ; aa < t ; aa++)
    {
	long long n;
	scanf("%lld" , &n);
	long long arr[n];
	for(long long  i = 0 ; i < n ; i++)
	{
	    scanf("%lld" , &arr[i]);
	}
	long long ans = 0;
	for(long long i = 0 ;(2*i) + 1 < n ; i++)
	{
	    ans += (n - ((2*i) + 1))*(arr[n - 1 - i] - arr[i]);
	}
	printf("%lld \n" , ans);
    }
    return 0;
}

