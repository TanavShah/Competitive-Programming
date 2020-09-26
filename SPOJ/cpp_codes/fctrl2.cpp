#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long fact(long p)
{
    if(p==1)
    {
	return 1;
    }
    else
    {
	return (p*(fact(p-1)));
    }
}

int main()
{
    long t;
    cin >> t;
    for (long aa = 0; aa<t; aa++)
    {
	long n;
	cin >> n;
	long x = fact(n);
	cout << x << endl;
    }
    return 0;
}
