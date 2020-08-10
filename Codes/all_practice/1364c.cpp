//			Su Saheb?

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

    ll b[n];
    for(ll i = 0 ; i < n ; i++)
	b[i] = -1;

    bool used[100010] = {0};
    used[arr[n - 1]] = 1;

    for(ll i = 1 ; i < n ; i++)
    {
	if(arr[i] != arr[i - 1])
	{
	    b[i] = arr[i - 1];
	    used[b[i]] = 1;
	}
    }
    
    ll start = 0;
    for(ll i = 0 ; i < n ; i++)
    {
	if(b[i] == -1)
	{
	    while(used[start])
	    	start++;
    
	    b[i] = start;
	    used[b[i]] = 1;
	}
    }

    for(ll i = 0 ; i < n ; i++)
	cout << b[i] << " ";

    cout << endl;

    return 0;
}

