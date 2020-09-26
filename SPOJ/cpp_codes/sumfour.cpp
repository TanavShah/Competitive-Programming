//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d" , &n);
    long long inp[n][4];
    for(int i = 0 ; i < n ; i++)
    {
	for(int j = 0 ; j < 4 ; j++)
	{
	    scanf("%lld" , &inp[i][j]);
	}
    }
    map<long long, long long> ab;
    map<long long, long long> cd;
    for(int i = 0 ; i < n ; i++)
    {
	for(int j = 0 ; j < n ; j++)
	{
	    ab[inp[i][0] + inp[j][1]]++;
	}
    }
    for(int i = 0 ; i < n ; i++)
    {
	for(int j = 0 ; j < n ; j++)
	{
	    cd[inp[i][2] + inp[j][3]]++;
	}
    }
    long long cnt = 0;
    for(auto i = ab.begin() ; i != ab.end() ; i++)
    {
	long long ans = i -> first;
	auto j = cd.find(-ans);
	if(j != cd.end())
	{
	    cnt += (i -> second)*(j -> second);
	}
    }
    printf("%lld \n" , cnt);
    return 0;
}
