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

	ll p[n];
	for(ll i = 0 ; i < n ; i++)
	    cin >> p[i];

	vector<ll> ans;
	ans.push_back(p[0]);

	if(n == 2)
	{
	    cout << 2 << endl;
	    cout << p[0] << " " << p[1] << endl;
	    continue;
	}

	for(ll i = 1 ; i < n - 1 ; i++)
	{
	    if((p[i] - p[i - 1] > 0 and p[i + 1] - p[i] > 0) or (p[i] - p[i - 1] < 0 and p[i + 1] - p[i] < 0))
	    {
		continue;
	    }

	    ans.push_back(p[i]);
	}

	ans.push_back(p[n - 1]);

	cout << ans.size() << endl;
	for(ll i = 0 ; i < ans.size() ; i++)
	    cout << ans[i] << " ";

	cout << endl;
    }

    return 0;
}

