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
	long long arr[n];
	for(long long i = 0 ; i < n ; i++)
	{
	    string s;
	    cin >> s;
	    scanf("%lld" , &arr[i]);
	}
	sort(arr , arr + n);
	long long ans = 0;
	for(long long i = 1 ; i <= n ; i++)
	{
	    ans += abs(i - arr[i - 1]);
	}
	printf("%lld \n" , ans);
    }
    return 0;
}

