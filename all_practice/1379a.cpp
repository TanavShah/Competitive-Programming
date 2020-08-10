//			Goli Beta, Masti Nai...

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

bool check(string s, ll n)
{
    string fin = "abacaba";
    ll cnt = 0;

    for(int i = 0 ; i <= n - 7 ; i++)
    {
	string temp = s.substr(i, 7);
	if(temp == fin)
	    cnt++;
    }

    if(cnt == 1)
	return true;
	return false;
}

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

	string fin = "abacaba";
	ll cnt = 0;

	for(int i = 0 ; i <= n - 7 ; i++)
	{
	    string temp = s.substr(i, 7);
	    if(temp == fin)
		cnt++;
	}

	if(cnt > 1)
	{
	    cout << "No" << endl;
	    continue;
	}

	if(cnt == 1)
	{
	    cout << "Yes" << endl;
	    for(int i = 0 ; i < n ; i++)
	    {
		if(s.at(i) == '?')
		    cout << "z";
		else
		    cout << s.at(i);
	    }
	    cout << endl;

	    continue;
	}

	bool fl = 0;

	for(int i = 0 ; i <= n - 7 ; i++)
	{
	    int val = 0;
	    for(int j = 0 ; j < 7 ; j++)
	    {
		if(s.at(i + j) == '?' or s.at(i + j) == fin.at(j))
		    val++;
	    }

	    string s1 = s;

	    if(val == 7)
	    {
		for(int j = 0 ; j < 7 ; j++)
		    s1.at(i + j) = fin.at(j);
		
		if(check(s1, n))
		{
		    fl = 1;
		    s = s1;
		    break;
		}
	    }
	}

	if(!fl)
	    cout << "No" << endl;
	else
	{
	    cout << "Yes" << endl;
	    for(ll i = 0 ; i < n ; i++)
	    {
		if(s.at(i) == '?')
		    cout << "z";
		else
		    cout << s.at(i);
	    }
	    cout << endl;
	}
    }

    return 0;
}

