//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    for(long aa = 0 ; ; aa++)
    {
	int l;
	cin >> l;
	if(l==0)
	{
	    break;
	}
	double ans;
	double pi = 3.141592;
	ans = ((l*l)/(2*(pi)));
	cout << fixed << setprecision(2) << ans << endl;
    }
    return 0;
}

