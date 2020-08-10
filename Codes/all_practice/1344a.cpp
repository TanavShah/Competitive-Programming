//		    Su Saheb?      

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
	ll n;
	cin >> n;
	ll arr[n];
	for(ll i = 0 ; i < n ; i++)
	    cin >> arr[i];

	if(n == 1)
	{
	    cout << "YES" << endl;
	    continue;
	}
	
	int ans = 1;

	int hash[n] = {0};

	for(ll i = 0 ; i < n ; i++)
	{
	    ll temp = i + arr[i];
	    if(temp < 0 and (abs(temp) % n != 0))
		temp = n - (abs(temp) % n);
	    else
		temp = temp % n;
	    hash[temp]++;
	}

	for(ll i = 0 ; i < n ; i++)
	    if(hash[i] != 1)
		ans = 0;
	
	if(ans)
	    cout << "YES" << endl;
	else
	    cout << "NO" << endl;
	
    }

    return 0;
}

