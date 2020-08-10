//		    Su Saheb?      

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

int main()
{
    int n;
    cin >> n;
    ll arr[n];
    ll sum = 0;
    for(int i = 0 ; i < n ; i++)
    {
	cin >> arr[i];
	sum += arr[i];
    }

    if(n < 3 or (sum % 3))
    {
	cout << 0 << endl;
	return 0;
    }

    ll tofind = sum/3;

    ll lsum[n] = {0};
    ll rsum[n] = {0};
    lsum[0] = arr[0];
    rsum[n - 1] = arr[n - 1];

    for(int i = 1 ; i < n ; i++)
    {
	lsum[i] = lsum[i - 1] + arr[i];
	rsum[n - i - 1] = rsum[n - i] + arr[n - i - 1];
    }
/*
    for(int i = 0 ; i < n ; i++)
    {
	cout << lsum[i] << " ";
    }
    cout << endl;
    for(int i = 0 ; i < n ; i++)
    {
	cout << rsum[i] << " ";
    }
*/  
    if(rsum[n - 1] == tofind)
	rsum[n - 1] = 1;
    else
	rsum[n - 1] = 0;

    for(int i = n - 2 ; i >= 0 ; i--)
    {
	if(rsum[i] == tofind)
	    rsum[i] = rsum[i + 1] + 1;
	else
	    rsum[i] = rsum[i + 1];
    }

    ll ans = 0;
    for(int i = 0 ; i < n - 2 ; i++)
    {
	if(lsum[i] == tofind)
	{
	    ans += rsum[i + 2];
	}
    }

    cout << ans << endl;

    return 0;
}

