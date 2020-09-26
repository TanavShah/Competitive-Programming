//		    Su Saheb?      

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

	vector<ll> pos;
	for(ll i = 0 ; i < n ; i++)
	    if(s.at(i) == 'A')
		pos.push_back(i);

	if(pos.size() == 0)
	{
	    cout << 0 << endl;
	    continue;
	}

	ll ans = 0;
	for(ll i = 1 ; i < pos.size() ; i++)
	{
	    ans = max(ans, pos[i] - pos[i - 1] - 1);
	}

	ans = max(ans, n - 1 - pos[pos.size() - 1]);
	cout << ans << endl;
    }

    return 0;
}

