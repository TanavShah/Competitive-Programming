//			Su Saheb?

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

int main()
{
    ll n,k;
    cin >> n >> k;

    char arr[n][n];

    for(ll i = 0 ; i < n ; i++)
	for(ll j = 0 ; j < n ; j++)
	    cin >> arr[i][j];

    pair<ll,ll> row[n], col[n];

    for(ll i = 0 ; i < n ; i++)
    {
	row[i].first = -1;
	row[i].second = -1;
	col[i].first = -1;
	col[i].second = -1;
    }

    for(ll i = 0 ; i < n ; i++)
    {
	for(ll j = 0 ; j < n ; j++)
	{
	    if(arr[i][j] == 'B')
	    {
		row[i].first = j;
		break;
	    }
	}
    }

    for(ll i = 0 ; i < n ; i++)
	for(ll j = 0 ; j < n ; j++)
	    if(arr[i][j] == 'B')
		row[i].second = j;

    for(ll i = 0 ; i < n ; i++)
    {
	for(ll j = 0 ; j < n ; j++)
	{
	    if(arr[j][i] == 'B')
	    {
		col[i].first = j;
		break;
	    }
	}
    }

    for(ll i = 0 ; i < n ; i++)
	for(ll j = 0 ; j < n ; j++)
	    if(arr[j][i] == 'B')
		col[i].second = j;

    ll ans = 0;

    for(ll i = 0 ; i < n ; i++)
    {
	if(row[i].first == -1 and row[i].second == -1)
	    ans++;

	if(col[i].first == -1 and col[i].second == -1)
	    ans++;
    }

    ll adder1 = 0, adder2 = 0;

    for(ll i = 0 ; i <= n - k ; i++)
    {
	ll temp = 0;
	ll xst = i, xen = i + k - 1;

	for(ll r = i ; r < i + k ; r++)
	    if(col[r].first >= xst and col[r].second <= xen)
		temp++;

	adder1 = max(adder1, temp);
    }	

    for(ll j = 0 ; j <= n - k ; j++)
    {
	ll temp = 0;
	ll yst = j, yen = j + k - 1;

        for(ll r = j ; r < j + k ; r++)
	    if(row[r].first >= yst and row[r].second <= yen)
		temp++;

	adder2 = max(adder2, temp);
    }

    cout << ans + adder1 + adder2 << endl;

    return 0;
}

