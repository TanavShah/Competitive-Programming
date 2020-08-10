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
	int n;
	cin >> n;
	ll arr[n];
	ll hash[1100] = {0};
//	ll maxi = 0;

	for(ll i = 0 ; i < n ; i++)
	{
	    cin >> arr[i];
	    hash[arr[i]]++;
//	    maxi = max(maxi, arr[i]);
	}

//	ll ind = ceil(log2(maxi));
//	maxi = pow(2, ind);

	ll ans = -1;

	for(ll i = 1 ; i < 1024 ; i++)
	{
	    ll fr[1100] = {0};

	    for(ll j = 0 ; j < n ; j++)
	    {
		fr[i ^ arr[j]]++;
	    }

	    int flag = 1;

	    for(ll j = 0 ; j < 1100 ; j++)
	    {
		if(fr[j] != hash[j])
		{
		    flag = 0;
		    break;
		}
	    }

	    if(flag)
	    {
		ans = i;
		break;
	    }
	}

	cout << ans << endl;
    }

    return 0;
}

