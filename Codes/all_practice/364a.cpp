//		    Su Saheb?      

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

int main()
{
    ll a;
    cin >> a;

    string s;
    cin >> s;
    ll n = s.length();

    ll arr[n] = {0};
    for(ll i = 0 ; i < n ; i++)
    {
	arr[i] = s.at(i) - '0';
	if(i)
	    arr[i] += arr[i - 1];
    }

    ll sum[9*n + 1] = {0};
    for(ll i = 0 ; i < n ; i++)
	for(ll j = i + 1 ; j < n ; j++)
	    sum[arr[j] - arr[i]]++;

    ll ans = 0;

    for(ll i = 1 ; i <= 9*n ; i++)
    {
	ll temp = 2;
	if(i*i == a)
	    temp--;

	if(a % i == 0)
	    ans += (sum[i]*sum[a/i]*temp);
    }

    if(a == 0)
	ans = (sum[0]*sum[0]);

    cout << ans << endl;

    return 0;
}

