//			Su Saheb?

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
	ll n;
	cin >> n;

	ll arr[n];
	for(ll i = 0 ; i < n ; i++)
	    cin >> arr[i];

	ll toggle = 0;

	for(ll i = 1 ; i < n ; i++)
	{
	    bool b1 = (arr[i - 1] == i);
	    bool b2 = (arr[i] == i + 1);

	    if(b1 and !b2)
		toggle++;
	}

	if(toggle != 0 and arr[0] != 1)
	    toggle++;

	if(toggle == 0)
	    cout << 1 - (arr[0] == 1) << endl;
	else if(toggle == 1)
	    cout << 1 << endl;
	else
	    cout << 2 << endl;
    }

    return 0;
}

