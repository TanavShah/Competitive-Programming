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
	ll n,m;
	cin >> n >> m;

	ll arr[n][m];
	ll row[n] = {0}, col[m] = {0};
	
	for(ll i = 0 ; i < n ; i++)
	{
	    for(ll j = 0 ;  j < m ; j++)
	    {
		cin >> arr[i][j];
		if(arr[i][j])
		{
		    row[i] = 1;
		    col[j] = 1;
		}
	    }
	}

	ll rowav = 0, colav = 0;

	for(ll i = 0 ; i < n ; i++)
	    if(!row[i])
		rowav++;

	for(ll j = 0 ; j < m ; j++)
	    if(!col[j])
		colav++;

	if(min(rowav, colav) % 2)
	    cout << "Ashish" << endl;
	else
	    cout << "Vivek" << endl;
    }

    return 0;
}

