//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long long sum(long long n)
{
    long long ans = 0;
    while(n != 0)
    {
	ans += (n % 10);
	n = n/10;
    }
    return ans;
}

int main()
{
    int t;
    scanf("%d" , &t);
    while(t--)
    {
	long long n;
	scanf("%lld" , &n);
	long long temp = n;
	while(1)
	{
	    if((temp % sum(temp)) == 0)
	    {
		printf("%lld \n" , temp);
		break;
	    }
	    temp++;
	}
    }
    return 0;
}
