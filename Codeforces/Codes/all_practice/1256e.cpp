//		    Su Saheb?      

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

    sort(arr, arr + n);

    ll ans = arr[2] - arr[0];
    ll lastmin = arr[0];
    ll lastmax = arr[2];

    for(ll i = 3 ; i < n - 3 ; i++)
    {
	ll temp;
	if(arr[i + 2] - arr[i] + lastmax - lastmin > arr[i + 2] - lastmin)
	{
	    ans += (arr[i + 2] - lastmax);
	}
	else
	{
	    lastmax = arr[i + 2];
	    lastmin = arr[i];
	    ans += (lastmax - lastmin);
	    i += 2;
	}
	cout << lastmin << " " << lastmax << endl;
    }

    if(n == 4 or n == 5)
    {
	ans = arr[n - 1] - arr[0];
    }
    else
    {
	ans += min(arr[n - 1] - arr[n - 3], arr[n - 3] - lastmax);
    }

    cout << ans << endl;

    return 0;
}

