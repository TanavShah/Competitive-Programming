#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    for(long aa = 0 ; ; aa++)
    {
	long n;
	cin >> n;
	if(n == -1)
	{
	    break;
	}
	long a[n];
	long s = 0;
	long x;
	for(long bb = 0 ; bb < n ; bb++)
	{   
	    cin >> a[bb];
	}
	long sum = 0;
	for(long i = 0 ; i < n ; i++)
	{
	    sum += a[i];
	}
	x = sum/n;
	if((sum % n) == 0)
	{
	    for(long j = 0 ; j < n ; j++)
	    {
		if(a[j] < x)
		{
		    s += (x - a[j]);
		}
	    }
	    cout << s << endl;
	}
	else
	{
	    cout << -1 << endl;
	}
    }
}
