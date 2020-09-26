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
	long long n,k;
	scanf("%lld %lld" , &n , &k);
	cout << (!(((n - k)&((k - 1)/2)))) << endl;
    }
    return 0;
}

