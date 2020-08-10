//			Su Saheb?

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

int main()
{
    ll n,k;
    cin >> n >> k;

    ll arr[n];
    for(ll i = 0 ; i < n ; i++)
	cin >> arr[i];

    for(ll i = n - 2 ; i >= 0 ; i--)
	arr[i] += arr[i + 1];

    ll ans = arr[0];

    sort(arr + 1, arr + n, greater<ll>());

    for(ll i = 1 ; i < k ; i++)
	ans += arr[i];

    cout << ans << endl;

    return 0;
}

