//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

string met(int x)
{
    if(x == 1)
	return "m";
    if(x == 2)
	return "a";
    if(x == 3)
	return "n";
    if(x == 4)
	return "k";
	return "u";
}

string met1(int x)
{
    if(x == 0)
	return "m";
    if(x == 1)
	return "a";
    if(x == 2)
	return "n";
    if(x == 3)
	return "k";
	return "u";
}

int main()
{
    int t;
    scanf("%d" , &t);
    while(t--)
    {
	long long n;
	scanf("%lld" , &n);
	string ans = "";

	
	if(!(n % 5))
	{
	    string temp = met(n % 5);
	    ans = temp + ans;
	    
	    
	    while(n)
	    {
		n = n/5;
		if(n >= 1)
		{
		    temp = met((n % 5) - 1);
	//	    cout << (n - 1) % 5 << endl;
		    ans = temp + ans;
		}   
	    }
	    cout << ans << endl;
	    continue;
	}

    
/*
	if(!(n % 5))
	{
	    while(n)
	    {	
		string temp = met1(n % 5);
		ans = temp + ans;
		n = n/5;
	    }
	    cout << ans << endl;
	    continue;
	}
*/
	while(n)
	{
	    string temp = met(n % 5);
	    ans = temp + ans;
	    n = n/5;
	}
	cout << ans << endl;
    }
    return 0;
}
