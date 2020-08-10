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
    ll pos[100010] = {0};
    for(ll i = 0 ; i < n ; i++)
    {
	cin >> arr[i];
	pos[arr[i]] = i + 1;
    }

    sort(arr, arr + n);
    ll fir,sec;
    if(n % 2)
    {
	fir = n/2 + 1;
	sec = n/2;
    }
    else
    {
	fir = n/2;
	sec = n/2;
    }

    cout << fir << endl;
    for(ll i = 0 ; i < n ; i += 2)
	cout << pos[arr[i]] << " ";

    cout << endl << sec << endl;

    for(ll i = 1 ; i < n ; i += 2)
	cout << pos[arr[i]] << " ";

    cout << endl;

    return 0;
}

