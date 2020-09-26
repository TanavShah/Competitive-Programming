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
    for(ll i = 1 ; i < n ; i++)
	cin >> arr[i];

    ll x = 1, y = 0;

    ll hash[n + 1] = {0};
    hash[1] = 1;

    for(ll i = 1 ; i <= n - 1 ; i++)
    {
//	cout << x << " " << y << endl;

	arr[0] = i;
	x = 1;
	y = 0;

	int flag_infloop = 0;
	int flag = 0;

	while(x > 0 and x <= n)
	{
	    y = y + arr[x - 1];
	    x = x + arr[x - 1];

	    if(x <= 0 or x > n)
	    {
		cout << y << endl;
		flag = 1;
		break;
	    }

	    if(hash[x] == 1)
	    {
		cout << -1 << endl;
		flag_infloop = 1;
		break;
	    }

	    hash[x] = 1;

	    y = y + arr[x - 1];
	    x = x - arr[x - 1];

	    if(x <= 0 or x > n)
	    {
		cout << y << endl;
		flag = 1;
		break;
	    }

	    if(hash[x] == 1)
	    {
		cout << -1 << endl;
		flag_infloop = 1;
		break;
	    }

	    hash[x] = 1;
	}
	memset(hash, 0, sizeof(hash));
    }

    return 0;
}

