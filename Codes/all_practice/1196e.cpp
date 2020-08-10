//			Su Saheb?

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
	ll b,w;
	cin >> b >> w;

	ll x = min(b,w);
	ll y = max(b,w);

	if(y > 3*x + 1)
	{
	    cout << "NO" << endl;
	    continue;
	}

	cout << "YES" << endl;
	
	if(x == w)
	{
	    ll st = 2;
	    while(x--)
	    {
		cout << 2 << " " << st << endl;
		st += 2;
	    }
	    
	    st = 1;
	    while(y and st <= 2*w + 1)
	    {
		cout << 2 << " " << st << endl;
		st += 2;
		y--;
	    }
	    
	    st = 2;
	    if(y > 0)
	    {
		while(y and st <= 2*w)
		{
		    cout << 1 << " " << st << endl;
		    st += 2;
		    y--;
		}
	    }

	    st = 2;
	    if(y > 0)
	    {
		while(y and st <= 2*w)
		{
		    cout << 3 << " " << st << endl;
		    st += 2;
		    y--;
		}
	    }
	}
	else
	{
	    ll st = 2;
	    while(x--)
	    {
		cout << 3 << " " << st << endl;
		st += 2;
	    }

	    st = 1;
	    while(y and st <= 2*b + 1)
	    {
		cout << 3 << " " << st << endl;
		st += 2;
		y--;
	    }

	    st = 2;
	    if(y > 0)
	    {
		while(y and st <= 2*b)
		{
		    cout << 2 << " " << st << endl;
		    st += 2;
		    y--;
		}
	    }

	    st = 2;
	    if(y > 0)
	    {
		while(y and st <= 2*b)
		{
		    cout << 4 << " " << st << endl;
		    st += 2;
		    y--;
		}
	    }
	}

    }

    return 0;
}

