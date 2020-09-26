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
	map <long long, long long> inp;
	for(long long i = 0 ; i < n ; i++)
	{
	    long long x;
	    scanf("%lld" , &x);
	    inp[x]++;
	}
	int flag = 0;
	for(auto i = inp.begin() ; i != inp.end() ; i++)
	{
	    if((i -> second) > (n/2))
	    {
		flag = 1;
		printf("%s %lld \n" , "YES" , i ->first);
	    }
	}
	if(flag == 0)
	{
	    printf("%s \n" , "NO");
	}
    }
    return 0;
}
