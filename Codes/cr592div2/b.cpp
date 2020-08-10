//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
	int n;
	cin >> n;
	string s;
	cin >> s;
	if(s.at(0) == '1' || s.at(n - 1) == '1')
	{
	    cout << 2*n << endl;
	    continue;
	}
	int ans = 0;
	int c0 = 0;
	for(int i = 0 ; i < n ; i++)
	{
	    if(s.at(i) == '0')
	    {
		c0++;
	    }
	}
	if(c0 == n)
	{
	    cout << n << endl;
	    continue;
	}
	else
	{
	    int c1 = 0,c2 = 0;
	    int p1,p2;
	    for(int i = 0 ; i < n ; i++)
	    {
		if(s.at(i) == '1')
		{
		    p1 = i;
		    break;
		}
	    }
	    for(int i = n - 1 ; i >= 0 ; i--)
	    {
		if(s.at(i) == '1')
		{
		    p2 = i;
		    break;
		}
	    }
	    c1 = n - p1;
	    c2 = p2 + 1;
	    int m = max(c1 , c2);
	    ans = 2*m;
	    cout << ans << endl;
	}
    }
    return 0;
}

