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
	if(n == 1)
	{
	    cout << 0 << endl;
	    continue;
	}
	if (n == 2)
	{
	    cout << 1 << endl;
	    continue;
	}
	if((n % 4) == 1)
	{
	    cout << (n/2) << endl;
	}
	if(((n % 4) == 0) || ((n % 4) == 2))
	{
	    int x = (n/4);
	    cout << (2*x - 1) << endl;
	}
	if((n % 4) == 3)
	{
	    int x = (n/4);
	    cout << (2*x + 1) << endl;
	}
    }
    return 0;
}

