//		    Su Saheb?      

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

int main()
{
    ll n;
    cin >> n;
    ll arr[n], cp[n];

    for(ll i = 0 ; i < n ; i++)
    {
	cin >> arr[i];
	cp[i] = arr[i];
    }

    sort(cp, cp + n);
    ll anomaly = 0;

    for(ll i = 0 ; i < n ; i++)
	if(arr[i] != cp[i])
	    anomaly++;

    if(anomaly > 2)
	cout << "NO" << endl;
    else
	cout << "YES" << endl;

    return 0;
}

