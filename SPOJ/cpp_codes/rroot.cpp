//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int aa = 0 ; aa < t ; aa++)
    {
	double s;
	cin >> s;
	double p;
	if(s > 2)
	{
	    p = 1 - ((sqrt(2)/(3*(sqrt(s)))));
	}
	double x = (double)s/12;
	if( s <= 2)
	{
	    p = 0.5 + x;
	}
	cout << setprecision(6) << fixed << p << endl;
    }
    return 0;
}

