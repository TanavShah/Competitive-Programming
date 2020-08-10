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
	ll n,k;
	cin >> n >> k;

	ll arr[n][n];
	memset(arr, 0, sizeof(arr));
	
	ll i = 0, j = 0;
	while(k--)
	{
	    arr[i][j] = 1;
	    i = (i + (j + n + 1)/n) % n;
	    j = (j + n + 1) % n;
	}

	ll bir = INT_MIN, smr = INT_MAX, bic = INT_MIN, smc = INT_MAX;

	for(i = 0 ; i < n ; i++)
	{
	    ll sum = 0;
	    for(j = 0 ; j < n ; j++)
		sum += arr[i][j];

	    bir = max(bir, sum);
	    smr = min(smr, sum);
	}

	for(j = 0 ; j < n ; j++)
	{
	    ll sum = 0;
	    for(i = 0 ; i < n ; i++)
		sum += arr[i][j];

	    bic = max(bic, sum);
	    smc = min(smc, sum);
	}

	cout << (bir - smr)*(bir - smr) + (bic - smc)*(bic - smc) << endl;

	for(i = 0 ; i < n ; i++)
	{
	    for(j = 0 ; j < n ; j++)
		cout << arr[i][j];

	    cout << endl;
	}
    }

    return 0;
}

