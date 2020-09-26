//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d" , &t);
    while(t--)
    {
	long long n;
	scanf("%lld" , &n);
	long long ans;
	if(n % 2)
	{
	    long long temp;
	    temp = (n - 1)/2;
	    ans = (temp * temp) % n;
	}
	else
	{
	    long long temp;
	    temp = (n - 2)/2;
	    ans = (temp * temp) % n;
	}
	printf("%lld\n" , ans);
    }
    return 0;
}

