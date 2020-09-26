//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long t;
    scanf("%lld" , &t);
    for(long long i = 0 ; i < t ; i++)
    {
	long long n,k,m;
	scanf("%lld %lld %lld" , &n , &k , &m);
	if(m < n)
	{
	    cout << 0 << endl;
	    continue;
	}
	double d = (double)m/(double)n;
	double ch = ((double)log10(d))/((double)log10(k));
	if(ch == (long long)ch)
	{
	    cout << ch << endl;
	}
	else
	{
	    cout << ceil(ch) - 1 << endl;
	}
    }
    return 0;
}
