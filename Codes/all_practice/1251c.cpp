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
	
	ll n = s.length();
	vector<ll> od, ev;
	for(ll i = 0 ; i < n ; i++)
	{
	    ll temp = s.at(i) - '0';
	    if(temp % 2)
		od.push_back(temp);
	    else
		ev.push_back(temp);
	}

	vector<ll> ans;
	
	if(od.size() == 0 or ev.size() == 0)
	{
	    cout << s << endl;
	    continue;
	}

	ll s1 = 0, s2 = 0;
	for(ll i = 0 ; i < n ; i++)
	{
	    if(s1 >= od.size())
	    {
		ans.push_back(ev[s2]);
		s2++;
		continue;
	    }

	    if(s2 >= ev.size())
	    {
		ans.push_back(od[s1]);
		s1++;
		continue;
	    }

	    if(od[s1] < ev[s2])
	    {
		ans.push_back(od[s1]);
		s1++;
	    }
	    else
	    {
		ans.push_back(ev[s2]);
		s2++;
	    }
	}

	for(ll i = 0 ; i < n ; i++)
	    cout << ans[i];
	
	cout << endl;
    }

    return 0;
}

