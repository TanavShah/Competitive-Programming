#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long t;
    cin >> t;
    for(long aa = 0 ; aa < t ; aa++)
    {
	long x,y;
	cin >> x >> y;
	if(x == y)
	{
	    if((x % 2) == 0)
	    {
		cout << 2*x  << endl;
	    }
	    else
	    {
		cout << (2*x) - 1 << endl;
	    }
	}
	if(x == y + 2)
	{
	    if((x % 2) == 0)
	    {
		cout << 2*(x-1) << endl;
	    }
	    else
	    {
		cout << (2*x) - 3 << endl;
	    }
	}
	if( (x != y) && (x != y + 2) )
	{
	    cout << "No Number" << endl;
	}
    }
}
