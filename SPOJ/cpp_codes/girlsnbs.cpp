//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    for(long aa = 0 ; ; aa++)
    {
	int g,b;
	cin >> g >> b;
	if((g == -1) && (b == -1))
	{
	    break;
	}
	else
	{
	    int p = max(g,b);
	    int n = min(g,b);
	    if((p == 0) && (n == 0))
	    {
		cout << 0 << endl;
		continue;
	    }
	    if((p - n) <= 1)
	    {
		cout << 1 << endl;
	    }
	    if((p - n) > 1)
	    {
		int x = (p/(n+1));
		int y = n*x;
		int ans = max(p-y,x);
		if((ans - x) >= 2)
		{
		    ans = ans - (ans - x - 1);
		}
		cout << ans << endl;
	    }
	}
    }
    return 0;
}
