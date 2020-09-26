//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long t;
    scanf("%lld" , &t);
    for(long long aa = 0 ; aa < t ; aa++)
    {
	long long m,n;
	scanf("%lld %lld" , &m , &n);
	if(m == n)
	{
	    if((n % 2) == 0)
	    {
		cout << "L" << endl;
		continue;
	    }
	    else
	    {
		cout << "R" << endl;
		continue;
	    }
	}
	if((m > n) && ((n % 2) == 0))
	{
	    cout << "U" << endl;
	    continue;
	}
	if((m > n) && ((n % 2) == 1))
	{
	    cout << "D" << endl;
	    continue;
	}
	if((m < n) && ((m % 2) == 1))
	{
	    cout << "R" << endl;
	    continue;
	}
	cout << "L" << endl;
    }
    return 0;
}

