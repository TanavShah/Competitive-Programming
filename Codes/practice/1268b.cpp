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

    ll ans1 = 0, ans2 = 0;

    for(ll i = 0 ; i < n ; i++)
    {
	if(i % 2)
	{
	    ans1 += arr[i]/2;
	    ans2 += (arr[i] - arr[i]/2);
	}
	else
	{
	    ans2 += arr[i]/2;
	    ans1 += (arr[i] - arr[i]/2);    
	}
    }

    cout << min(ans1, ans2) << endl;

    return 0;
}

