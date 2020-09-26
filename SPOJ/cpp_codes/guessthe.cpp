//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long long gcd(long long a , long long b)
{
    if(b == 0)
	return a;
	return gcd(b , a % b);
}

int main()
{
    while(1)
    {
	string inp;
	cin >> inp;
	if(inp == "*")
	{
	    break;
	}
	long long ans = 1;
	for(int i = 0 ; i < inp.length() ; i++)
	{
	    if(inp.at(i) == 'Y')
	    {
		ans = ((ans*(i + 1))/gcd(ans,i + 1));
	    }
	}
	int flag = 1;
	for(int i = 0 ; i < inp.length() ; i++)
	{
	    if(inp.at(i) == 'N')
	    {
		if((ans % (i + 1)) == 0)
		{
		    flag = 0;
		    break;
		}
	    }
	}
	if(flag == 0)
	{
	    ans = -1;
	}
	printf("%lld \n" , ans);
    }
    return 0;
}

