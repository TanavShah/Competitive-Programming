#include <iostream>
#include <bits/stdc++.h>

using namespace std;

map <long,long> val;

long method(long a)
{
    long x,y,z;
    x = a/2;
    y = a/3;
    z = a/4;
    if(a <= 1000000000)
    {
    if(val[a] == 0)
    {
    if(a >= (x + y + z))
    {
	val[a] = a;
    }
    else
	val[a] = (method(x) + method(y) + method(z));
    }
    return val[a];	
    }
    else
    {
    if(a >= (x + y + z))
    {
	return a;
    }
    else
	return (method(x) + method(y) + method(z));
                	
    }
}

int main()
{
    for(long aa = 0 ;  ; aa++)
    {
	long n;
	cin >> n;
	long ans = method(n);
	cout << ans << endl;
    }
}
