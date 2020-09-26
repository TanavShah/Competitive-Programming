#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    for(long aa = 0 ; ; aa++)
    {
	long a1,a2,a3;
	cin >> a1 >> a2 >> a3;
	if((a1 == 0) && (a2 == 0) && (a3 == 0) )
	{
	    exit(0);
	}
	long d1 = a2 - a1;
	long d2 = a3 - a2;
	double r1 =(double) a2/(double)a1;
	double r2 = (double)a3/(double)a2;
	if(d1 == d2)
	{
	    cout << "AP " << a3 + d1 << endl;
	}
	if(r1 == r2)
	{
	    cout << "GP " << a3*r1 << endl;
	}
    }
}
