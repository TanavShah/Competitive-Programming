//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

map<long long, long long> store;

long long method(long long arr[], long long p)
{
    if(p == 0)
    {
	return arr[0];
    }
    if(p == 1)
    {
	return arr[1];
    }
    map<long long,long long> :: iterator itr;
    for(itr = store.begin() ; itr != store.end() ; itr++)
    {
	if((itr -> first) == p)
	{
	    return itr -> second;
	}
    }
    long long sum = arr[p];
    long long max = 0;
    for(long long i = p-2 ; i >= 0 ; i--)
    {
	long long bb = method(arr,i);
	store.insert(pair<long long, long long> (i , bb));
	if(bb > max)
	{
	    max = bb;
	}
    }
    sum += max;
    return sum;
}

int main()
{
    long long t;
    scanf("%lld",&t);
    for(long long aa = 0 ; aa < t ; aa++)
    {
	long long n;
	scanf("%lld", &n);
	long long a[n];
	for(long long i = 0 ; i < n ; i++)
	{
	    cin >> a[i];
	}
	long long sum;
	if(n >= 2)
	{
	    sum = max(method(a , n-1), method(a , n-2)); 
	}
	if(n == 1)
	{
	    sum = a[0];
	}
	if(n == 0)
	{
	    sum = 0;
	}
	cout << "Case " << aa+1 << ": " << sum << endl;
	store.clear();
    }
    return 0;
}

