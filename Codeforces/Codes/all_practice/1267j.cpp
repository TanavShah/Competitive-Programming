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
	ll arr[n + 10] = {0};
	for(ll i = 0 ; i < n ; i++)
	{
	    ll temp;
	    cin >> temp;
	    arr[temp]++;
	}

	vector<ll> fr;
	for(ll i = 0 ; i < n + 10 ; i++)
	{
	    if(arr[i] != 0)
		fr.push_back(arr[i]);
	}

	ll mini = INT_MAX;
	for(ll i = 0 ; i < fr.size() ; i++)
	    mini = min(mini , fr[i]);

	ll s = mini + 1;
	ll m = INT_MAX;

	for(ll i = 1 ; i <= s ; i++)
	{
	    ll temp = 0;
	    ll flag = 0;
	    for(ll j = 0 ; j < fr.size() ; j++)
	    {
		ll num = ceil((double)fr[j]/(double)i);
		if(fr[j] < num*(i - 1))
		{
		    flag = 1;
		    break;
		}

		temp += num;
	    }

	    if(!flag)
	    {
		m = min(m, temp);
	    }
	}

	cout << m << endl;
    }

    return 0;
}

