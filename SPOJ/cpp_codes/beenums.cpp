//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool checkint(double p)
{
    long long r = (long long)p;
    return (p == r) ? true : false;
}

int main()
{
    for(long long aa = 0 ; ; aa++)
    {
	long long inp;
	scanf("%lld", &inp);
	if(inp == -1)
	{
	    break;
	}
	double x;
	x = sqrt(((4*inp)-1)/3);
	long long y = (long long)x;
	if(checkint(x))
	{
	    if((y % 2) == 1)
	    {
		cout << "Y" << endl;
	    }
	}
	else
	{
	    cout << "N" << endl;
	}
    }
    return 0;
}

