//		    Su Saheb?      

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

int main()
{
    ll q,x;
    cin >> q >> x;

    ll arr[x] = {0};

    set<pair<ll, ll>> vals;
    for(ll i = 0 ; i < x ; i++)
	vals.insert({arr[i], i});

    for(ll i = 0 ; i < q ; i++)
    {
	ll temp;
	cin >> temp;
	
	temp %= x;
	vals.erase({arr[temp], temp});
	arr[temp]++;
	vals.insert({arr[temp], temp});

	ll ans = vals.begin()->first * x + vals.begin()->second;
	cout << ans << endl;
    }

    return 0;
}

