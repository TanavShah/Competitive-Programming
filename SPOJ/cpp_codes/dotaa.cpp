//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool checkint(double p, double q)
{
    double d1 = p/q;
    int d2 = (int)(p/q);
    if(d1 == d2)
    return true;
    return false;
}

int main()
{
    int t;
    scanf("%d" , &t);
    for(int aa = 0 ; aa < t ; aa++)
{
    int n,m;
    scanf("%d %d" , &n , &m);
    double d;
    cin >> d;
    int c = 0;
    for(int i = 0 ; i < n ; i++)
    {
	double x;
	cin >> x;
	if(checkint(x,d))
	{
	    c += (int)(x/d) - 1;
	}
	else
	{
	    c += (int)(x/d);
	}
    }
    if(c >= m)
    {
	cout << "YES" << endl;
    }
    else
    {
	cout << "NO" << endl;
    }
}
    return 0;
}

