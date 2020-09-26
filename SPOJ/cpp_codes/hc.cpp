//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d" , &t);
    while(t--)
    {
	int n;
	scanf("%d" , &n);
	int h = 0;
	for(int i = 0 ; i < n ; i++)
	{
	    string s;
	    cin >> s;
	    if(s.at(0) == 'h')
	    {
		h++;
	    }
	}
	string ans;
	if((n % 2) == 0)
	{
	    if((h % 2) == 0)
	    {
		ans = "hhb";
	    }
	    else
	    {
		ans = "lxh";
	    }
	}
	else
	{
	    if((h % 2) == 0)
	    {
		ans = "lxh";
	    }
	    else
	    {
		ans = "hhb";
	    }
	}
	cout << ans << endl;
    }
    return 0;
}

