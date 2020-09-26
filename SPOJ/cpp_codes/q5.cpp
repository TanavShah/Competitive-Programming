#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int pcheck(long n)
{
    int z =0;
   /* long a;
    for (long i=1;;i++)
    {
	long b = pow(10,i);
	long c = (long)(n/b);
	if (c == 0);
	{
	    a = i;
	}
    }
    */
    string d;
    stringstream e;
    e << n;
    d = e.str();
    long a = d.length();
    long g = 0;
    if (a % 2 == 0)
    {
	for (long i = 0; i < (a/2);i++)
	{
	    if (d.at(i) == d.at(a-1-i))
	    {
		g++;
	    }
	}
	if (g==(a/2))
	{
	    z = 1;
	}
    }
    else
    {
	for (long i = 0; i < ((a-1)/2);i++)
	{
	    if (d.at(i) == d.at(a-1-i))
	    {
		g++;
	    }
	}
	if (g==((a-1)/2))
	{
	    z = 1;
	}
    }
    return z;
}
int main()
{
    long t;
    cin >> t;
    for (long j =0;j<t;j++)
    {
	long h;
	cin >> h;
	for(long l=h+1;;l++)
	{
	    if (pcheck(l) == 1)
	    {
		cout << l << endl;
		break;
	    }
	}
    }
    return 0;
}
