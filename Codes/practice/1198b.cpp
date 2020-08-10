//			Su Saheb?

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

int main()
{
    ll n;
    cin >> n;

    ll arr[n];
    for(ll i = 0 ; i < n ; i++)
	cin >> arr[i];

    ll t;
    cin >> t;
    
    ll val[4][t];
    memset(val, 0, sizeof(val));

    for(ll i = 0 ; i < t ; i++)
    {
	cin >> val[0][i];

	if(val[0][i] == 1)
	{
	    cin >> val[1][i];
	    cin >> val[2][i];
	}
	else
	    cin >> val[1][i];
    }
    
    if(val[0][t - 1] == 1)
	val[3][t - 1] = 0;
    else
	val[3][t - 1] = val[1][t - 1];

    for(ll i = t - 2 ; i >= 0 ; i--)
    {
	if(val[0][i] == 1)
	    val[3][i] = val[3][i + 1];
	else
	    val[3][i] = max(val[3][i + 1], val[1][i]);
    }

    ll done = 0;

    for(ll i = 0 ; i < t ; i++)
    {
	if(val[0][i] == 1)
	{
	    ll p = --val[1][i];
	    arr[p] = max(val[2][i], val[3][i]);
	}
	else
	{
	    if(!done)
	    {
		done = 1;
		for(ll j = 0 ; j < n ; j++)
		    arr[j] = max(arr[j], val[3][i]);
	    }
	}
    }

    for(ll i = 0 ; i < n ; i++)
	cout << arr[i] << " ";

    cout << endl;

    return 0;
}

