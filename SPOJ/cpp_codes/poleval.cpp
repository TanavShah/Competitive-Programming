//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long cnt = 1;
    while(1)
    {
	long long n,k;
	scanf("%lld" , &n);
	if(n == -1)
	{
	    break;
	}
	long long c[n + 1];
	for(long long i = 0 ; i <= n ; i++)
	{
	    scanf("%lld" , &c[i]);
	}
	scanf("%lld" , &k);
	long long x[k];
	for(long long i = 0 ; i < k ; i++)
	{
	    scanf("%lld" , &x[i]);
	}
	long long ans[k] = {0};
	for(long long i = 0 ; i < k ; i++)
	{
	    long long cur = 1;
	    ans[i] += c[n];
	    for(long long j = n - 1 ; j >= 0 ; j--)
	    {
		cur = cur*x[i];
		ans[i] += (cur*c[j]);
	    }
	}
	cout << "Case " << cnt << ":" << endl;
	for(long long i = 0 ; i < k ; i++)
	{
	    printf("%lld \n" , ans[i]);
	}
	cnt++;

    }
    return 0;
}

