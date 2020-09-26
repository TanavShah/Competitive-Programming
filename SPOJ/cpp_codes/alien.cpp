//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long t;
    scanf("%lld" , &t);
    for(long long aa = 0 ; aa < t ; aa++)
    {
	long long at,bt;
	scanf("%lld %lld" , &at , &bt);
	long long ppl[at];
	for(long long i = 0 ; i < at ; i++)
	{
	    scanf("%lld" , &ppl[i]);
	}
	long long station[at] = {0} , cost[at] = {0};
	for(long long i = 0 ; i < at ; i++)
	{
	    if(ppl[i] > bt)
	    {
		cost[i] = 0;
		station[i] = 0;
		continue;
	    }
	    for(long long j = i ; j < at ; j++)
	    {
		cost[i] += ppl[j];
		if(cost[i] > bt)
		{
		    cost[i] -= ppl[j];
		    break;
		}
		station[i]++;
	    }   
	}
	long long max = station[0];
	long long ind;
	for(long long i = 0 ; i < at ; i++)
	{
	    if(station[i] >= max)
	    {
		max = station[i];
		ind = i;
	    }
	}
	long long ans = cost[ind];
	for(long long i = ind; i >= 0 ; i--)
	{
	    if((station[i] == max) && (cost[i] < ans))
	    {
		ans = cost[i];
	    }
	}
	cout << ans << " " << max << endl;
    }
    return 0;
}
