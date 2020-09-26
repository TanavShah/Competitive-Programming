//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    for(int aa = 0 ; ; aa++)
    {
	long long t;
	scanf("%lld" , &t);
	if(t == 0)
	{
	    break;
	}
	long long inp[t];
	for(int i = 0 ; i < t ; i++)
	{
	    scanf("%lld" , &inp[i]);
	}
	sort(inp , inp + t);
	int flag = 0;
	for(int i = 0 ; i < t-1 ; i++)
	{
	    if((inp[i + 1] - inp[i]) > 200)
	    {
		flag = 1;
		break;
	    }
	}
	if(flag == 1)
	{
	    puts("IMPOSSIBLE");
	    continue;
	}
	else
	{
	    if((inp[t - 1]) >= 1322)
	    {
		puts("POSSIBLE");
		continue;
	    }
	    else
	    {
		puts("IMPOSSIBLE");
	    }
	}
    }
    return 0;
}

