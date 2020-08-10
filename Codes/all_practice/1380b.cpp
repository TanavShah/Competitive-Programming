//			Goli Beta, Masti Nai...

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
	string inp;
	cin >> inp;

	ll n = inp.length();

	ll r = 0, s = 0, p = 0;

	for(ll i = 0 ; i < n ; i++)
	{
	    if(inp.at(i) == 'R')
		r++;

	    if(inp.at(i) == 'P')
		p++;

	    if(inp.at(i) == 'S')
		s++;
	}

	ll m = max(r, max(s, p));

	if(m == r)
	{
	    for(ll i = 0 ; i < n ; i++)
		cout << "P";
	    
	    cout << endl;
	}

	else if(m == s)
	{
	    for(ll i = 0 ; i < n ; i++)
		cout << "R";
	    
	    cout << endl;
	}

	else
	{
	    for(ll i = 0 ; i < n ; i++)
		cout << "S";
	    
	    cout << endl;
	}
    }

    return 0;
}

