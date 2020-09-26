//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

map<long long , long long> m;
//long long u;
//long long a[u] , b[u] , c[u];

int method(long long x , long long a1[] , long long b1[] , long long c1[] , long long size)
{
    if(m[x] != 0)
    {
	printf("%lld \n" , m[x]);
	return 1;
    }
    for(long long i = 0 ; i < size ; i++)
    {
	if((x >= a1[i]) && (x <= b1[i]))
	{
	    m[x] += c1[i];
	}
    }
    printf("%lld \n" , m[x]);
    return 1;
}

int main()
{
    int t;
    scanf("%d" , &t);
    for(int aa = 0 ; aa < t ; aa++)
    {
	long long n , u;
	scanf("%lld %lld" , &n , &u);
	long long a[u] , b[u] , c[u];
	for(long long i = 0 ; i < u ; i++)
	{
	    scanf("%lld %lld %lld" , &a[i] , &b[i] , &c[i]);
	}
	long long q;
	scanf("%lld" , &q);
	for(long long bb = 0 ; bb < q ; bb++)
	{
	    long long inp;
	    scanf("%lld" , &inp);
	    int x = method(inp , a , b , c , u);
	}
	m.clear();
    }
    return 0;
}
