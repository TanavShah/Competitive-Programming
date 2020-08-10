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
	string s;
	cin >> s;

	ll ans = 0;
	ll init = 0;
	ll cnt = 0;

	for(ll i = 0 ; i < s.length() ; i++)
	{
	    if(s.at(i) == '-')
		cnt++;
	    else
		cnt--;

	    if(cnt > init)
	    {
		ans += (i + 1);
		init++;
	    }
	}

	cout << ans + s.length() << endl;
	
    }

    return 0;
}

