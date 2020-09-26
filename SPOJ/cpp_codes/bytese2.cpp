//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool pres(pair<long long , long long>p , long long x)
{
    if((x < p.first) && (x >= p.second))
	return true;
	return false;
}

int main()
{
    int t;
    scanf("%d" , &t);
    for(int aa = 0 ; aa < t ; aa++)
    {
	int n;
	scanf("%d" , &n);
	vector<pair<long long , long long>> inp;
	for(int i = 0 ; i < n ; i++)
	{
	    long long x,y;
	    scanf("%lld %lld" , &x , &y);
	    inp.push_back(make_pair(y , x));
	}
//	sort(inp.begin() , inp.end());
//	for(long long i = 0 ; i < n ; i++)
//	{
//	    cout << inp[i].first << " " << inp[i].second << endl;
//	}
//	long long en = inp[n - 1].first;
	long long en = inp[0].first;
	for(long long i = 0 ; i < n ; i++)
	{
	    if(inp[i].first > en)
	    {
		en = inp[i].first;
	    }
	}
	long long st = inp[0].second;
	for(long long i = 0 ; i < n ; i++)
	{
	    if(inp[i].second < st)
	    {
		st = inp[i].second;
	    }
	}
	long long arr[en - st] = {0};
	for(long long i = 0 ; i < (en - st) ; i++)
	{
	    for(long long j = 0 ; j < n ; j++)
	    {
		if(pres(inp[j] , i + st))
		{
		    arr[i]++;
		}
	    }
	}
	long long ans = arr[0];
	for(long long i = 0 ; i < (en - st) ; i++)
	{ 
//	    cout << arr[i] << endl;
	    if(arr[i] > ans)
	    {
		ans = arr[i];
	    }
	}
	printf("%lld \n" , ans);
    }
    return 0;
}
