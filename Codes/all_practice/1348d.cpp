//		    Su Saheb?      

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
	ll n;
	cin >> n;

	vector<ll> ans;

	for(ll i = 0 ;  ; i++)
	{
	    ll temp = pow(2, i);
	    if(n < temp)
		break;

	    n -= temp;
	    ans.push_back(temp);
	}

	if(n != 0)
	{
	    ans.push_back(n);
	    sort(ans.begin(), ans.end());
	}

	cout << ans.size() - 1 << endl;
	for(ll i = 1 ; i < ans.size() ; i++)
	{
	    cout << ans[i] - ans[i - 1] << " ";
	}
	cout << endl;
    }

    return 0;
}

