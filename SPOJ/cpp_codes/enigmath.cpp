//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long long gcd(long long n , long long m)
{
    if(m == 0)
    return n;
    return gcd(m , n % m);
}

int main()
{
    int t;
    scanf("%d" , &t);
    for(int aa = 0 ; aa < t ; aa++)
    {
	long long a,b;
	scanf("%lld %lld" , &a , &b);
	long long g = gcd(a,b);
	long long x,y;
	x = (b/g);
	y = (a/g);
	printf("%lld %lld" , x , y);
	printf("\n");
    }
    return 0;
}
