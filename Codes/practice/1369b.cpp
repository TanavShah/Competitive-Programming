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
	ll n;
	cin >> n;
	string s;
	cin >> s;

	string st = "";
	string en = "";

	for(ll i = 0 ; i < n ; i++)
	{
	    if(s.at(i) == '1')
		break;
	    
	    st += "0";
	}

	for(ll i = n - 1 ; i >= 0 ; i--)
	{
	    if(s.at(i) == '0')
		break;

	    en += "1";
	}
	
	string ans = st;
	if(st.length() + en.length() == n)
	    ans += en;
	else
	    ans += ("0" + en);

	cout << ans << endl;
    }

    return 0;
}

