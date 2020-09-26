//			Goli Beta, Masti Nai...

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
	ll n;
	cin >> n;

	string s;
	cin >> s;

	ll st = 1;
	stack<ll> ze, on;

	ll ans[n] = {0};

	for(ll i = 0 ; i < n ; i++)
	{
	    if(s.at(i) == '1')
	    {
		if(!ze.empty())
		{
		    ll temp = ze.top();
		    ze.pop();
		    ans[i] = temp;
		    on.push(temp);
		}
		else
		{
		    ans[i] = st;
		    on.push(st++);
		}
	    }
	    else
	    {
		if(!on.empty())
		{
		    ll temp = on.top();
		    on.pop();
		    ans[i] = temp;
		    ze.push(temp);
		}
		else
		{
		    ans[i] = st;
		    ze.push(st++);
		}
	    }
	}

	cout << *max_element(ans, ans + n) << endl;
	for(ll i = 0 ; i < n ; i++)
	    cout << ans[i] << " ";

	cout << endl;
    }

    return 0;
}

