//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d" , &t);
    for(int aa = 0 ; aa < t ; aa++)
    {
	long long n;
	scanf("%lld" , &n);
	vector<pair<long long , long long>> inp;
	for(long long i = 0 ; i < n ; i++)
	{
	    long long x,y;
	    scanf("%lld %lld" , &x , &y);
	    inp.push_back(make_pair(x,y));
	}
	long long max = inp[0].second;
	long long min = inp[0].second;
	for(long long i = 0 ; i < n ; i++)
	{
	    if((inp[i].second) > max)
	    {
		max = inp[i].second;
	    }
	    if((inp[i].second) < min)
	    {
		min = inp[i].second;
	    }
	}
	pair<long long , long long> max1;
	max1.first = 0;
	max1.second = min;
	long long cnt = 0;
	while(max1.second < max)
	{
	    long long var = max1.first - 1;
	    for(long long i = 0 ; i < n ; i++)
	    {
		if((inp[i].second) == max1.second)
		{
		    if((inp[i].first) > var)
		    {
			var = inp[i].first;
		    }
		}
	    }
	    if(var != (max1.first - 1))
	    {
		cnt++;
	    }
	    max1.first = max1.second;
	    for(long long i = 0 ; i < n ; i++)
	    {
		if((inp[i].second) > max1.second)
		{
		    max1.second = inp[i].second;
		}
	    }
	    for(long long i = 0 ; i < n ; i++)
	    {
		if((inp[i].second) > max1.first)
		{
		    if((inp[i].second) < max1.second)
		    {
			max1.second = inp[i].second;
		    }
		}
	    }
	}
	long long var1 = max1.first - 1;
	for(long long i = 0 ; i < n ; i++)
	{
	    if((inp[i].second) == max)
	    {
		if(inp[i].first > var1)
		{
		    var1 = inp[i].first;
		}
	    }
	}
	if(var1 != max1.first - 1)
	{
	    cnt++;
	}
//	cout << max1.first << " " << max1.second << endl;
//	cout << endl;
	printf("%lld" , cnt);
	printf("\n");
    }
    return 0;
}
