//			Goli Beta, Masti Nai...

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

	ll pos = n - 1;

	for(ll i = 0 ; i < n ; i++)
	{
	    if(arr[i] != 1)
	    {
		pos = i;
		break;
	    }
	}

	if(pos % 2)
	    cout << "Second" << endl;
	else
	    cout <<  "First" << endl;
    }

    return 0;
}

