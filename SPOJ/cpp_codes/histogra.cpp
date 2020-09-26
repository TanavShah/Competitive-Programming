//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    for(long long aa = 0 ; ; aa++)
    {
	long long n;
	scanf("%lld" , &n);
	if(n == 0) break;
	long long inp[n],oup[n] = {0};
	for(long long i = 0 ; i < n ; i++)
	{
	    scanf("%lld" , &inp[i]);
	}
	long long min = inp[0];
	for(long long i = 0 ; i < n-1 ; i++)
	{
	    vector <long long> v;
	    v.push_back(inp[i]);
	    for(long long j = i+1 ; j < n ; j++)
	    {
		long long minimum = inp[i];
		for(long long k = i+1 ; k <= j ; k++)
		{
		    if(inp[k] < minimum)
		    {
			minimum = inp[k];
		    }
		}
		v.push_back(minimum*(j-i+1));
	    }
	 long long ansoup = v[0];
	 for(long long ss = 1 ; ss < v.size() ; ss++)
	 {
	     if(v[ss] > ansoup)
	     {
		 ansoup = v[ss];
	     }
	 }
	 oup[i] = ansoup;
	}
	oup[n-1] = inp[n-1];
	long long ans = 0;
	for(long long i = 0 ; i < n ; i++)
	{
	    if(oup[i] > ans)
	    {
		ans = oup[i];
	    }
	}
	printf("%lld\n" , ans);
    }
    return 0;
}
