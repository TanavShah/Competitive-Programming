//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    while(!cin.eof())
    {
	cin >> str;
	int size = str.length();
	int inp[size] = {0};
	for(int i = 0 ; i < size ; i++)
	{
	    if(str.at(i) < 95)
	    {
		inp[i] = 1;
	    }
	}
	int even = 0;
	int odd = 0;
	for(int i = 0 ; i < size ; i++)
	{
	    if(inp[i] == 1)
	    {
		if((i % 2) == 0)
		{
		    even++;
		}
		else
		{
		    odd++;
		}
	    }
	}
	int ans;
	if((odd == 0) && (even == 0))
	{
	    ans = (size)/2;
	}
	else if(odd*even == 0)
	{
	    ans = 0;
	}
	else
	{
	if(even > odd)
	{
	    ans = odd + ((size + 1)/2) - even;
	}
	else if(odd > even)
	{
	    ans = even + ((size + 1)/2) - odd;
	}
	else
	{
	    ans = size/2;
	}
	}
	printf("%d \n" , ans);
    }
    return 0;
}

