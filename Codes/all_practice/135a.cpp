//		    Su Saheb?      

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

int main()
{
    ll n;
    cin >> n;

    ll arr[n + 1];
    for(ll i = 1 ; i <= n ; i++)
	cin >> arr[i];

    arr[0] = 0;
    sort(arr, arr + n + 1);

    if(arr[n] == 1)
    {
	for(ll i = 0 ; i < n - 1 ; i++)
	{
	    cout << 1 << " ";
	}
	cout << 2 << endl;
	return 0;
    }
    else
    {
	arr[0] = 1;
	for(ll i = 0 ; i < n ; i++)
	{
	    cout << arr[i] << " ";
	}
	cout << endl;
    }

    return 0;
}

