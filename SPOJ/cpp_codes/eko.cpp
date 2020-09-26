//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,m;
    scanf("%lld %lld" , &n , &m);
    long long inp[n];
    long long max = 0 , h = 0;
    for(long long i = 0 ; i < n ; i++)
    {
	scanf("%lld" , &inp[i]);
	if(inp[i] > max)
	    max = inp[i];
    }
    long long st = 0,en = max,mid,ans;
    while(st <= en)
    {
	mid = (st + en)/2;
	ans = 0;
	for(long long i = 0 ; i < n ; i++)
	{
	    if(inp[i] > mid)
	    {
		ans += inp[i] - mid;
	    }
	}
	if(ans > m)
	{
	    st = mid + 1;
	    if(mid > h)
	    {
		h = mid;
	    }
	}
	else if(ans < m)
	{
	    en = mid - 1;
	}
	else
	{
	    h = mid;
	    break;
	}
    }
    printf("%lld \n" , h);
    return 0;
}
