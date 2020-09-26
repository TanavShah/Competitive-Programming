//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long long pow(long long x , long long y)
{
    long long res = 1;
    x = x % 10000007;
    while(y > 0)
    {
	if(y & 1)
	    res = (res*x) % 10000007;
	y = y >> 1;
	x = (x*x) % 10000007;
    }
    return res;
}

int main()
{
    for(long long aa = 0 ; ; aa++)
    {
	long long n,k;
	scanf("%lld %lld" , &n , &k);
	if((n == 0) && (k == 0))
	{
	    break;
	}
	long long a1 = (pow(n , n)) % 10000007;
	long long a2 = (2*(pow(n - 1 , n - 1))) % 10000007;
	long long a3 = (pow(n , k)) % 10000007;
	long long a4 = (2*(pow(n - 1 , k))) % 10000007;
	long long ans = (a1 + a2 + a3 + a4) % 10000007;
	if(ans < 0)
	{
	    ans += 10000007;
	}
//	cout << a1 << " " << a2 << " " << a3 << " " << a4 << endl;
	printf("%lld \n" , ans);
//	cout << pow(n , k) << endl;
    }
    return 0;
}
