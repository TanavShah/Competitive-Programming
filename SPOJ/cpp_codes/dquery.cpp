//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long long method(long long arr[] , long long be , long long te, long long size)
{
    map<int,int> dele;
    long long max = arr[0];
    for(long long i = be-1 ; i < te ; i++)
    {
	if(arr[i] > max)
	{
	    max = arr[i];
	}
    }
    for(long long i = 0 ; i <= max ; i++)
    {
	dele.insert({i , 0});
    }
    for(long long i = be-1 ; i < te ; i++)
    {
	dele[arr[i]]++;
    }
    long long c = 0;
    for(auto i = dele.begin() ; i != dele.end() ; i++)
    {
	if((i -> second) != 0)
	{
	    c++;
	}
    }
    return c;
}

int main()
{
    long long n;
    scanf("%lld" , &n);
    long long inp[n];
    for(long long i = 0 ; i < n ; i++)
    {
	scanf("%lld" , &inp[i]);
    }
    long long q;
    scanf("%lld" , &q);
    for(long long aa = 0 ; aa < q ; aa++)
    {
	long long st , en;
	scanf("%lld %lld" , &st , &en);
	long long ans = method(inp,st,en,n);
	printf("%lld \n" , ans);
    }
    return 0;
}
