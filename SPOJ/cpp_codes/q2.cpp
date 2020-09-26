#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool pcheck(long a)
{
    if(a==1)
    {
	return false;
    }
    else
    {
    long p = sqrt(a);
    long c = 0;
    for(long bb=1;bb<=p;bb++)
    {
	if((a%bb) == 0)
	{
	    c++;
	}
    }
    if(c == 1)
    {
	return true;
    }
    else
    {
	return false;
    }
    }
}
int main()
{
    int t;
    cin >> t;
    for (int aa=0;aa<t;aa++)
    {
	long n,m;
	cin  >> m;
	cin >> n;
	for(long i = m; i <= n ; i++)
	{
	    if(pcheck(i) == true)
	    {
		cout << i << endl;
	    }
	}
	cout << endl;

    }
    return 0;
}
