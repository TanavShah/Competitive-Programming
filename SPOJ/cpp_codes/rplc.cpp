//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long t;
    scanf("%lld" , &t);
    for(long long aa = 1 ; aa <= t ; aa++)
    {
	long long n;
	scanf("%lld" , &n);
	long long inp[n];
	for(long long i = 0 ; i < n ; i++)
	{
	    scanf("%lld" , &inp[i]);
	}
	long long ans = 0;
	long long cnt = 0;
	for(long long i = 0 ; i < n ; i++)
	{
	    ans += inp[i];
	    if(ans <= 0)
	    {
		cnt += (1 - ans);
		ans  =  1;
	    }
	}
	if(cnt == 0)
	{
	    cnt  = 1;
	}
	cout << "Scenario #" << aa << ": " << cnt << endl;
    }
    return 0;
}
