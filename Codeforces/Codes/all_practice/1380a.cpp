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

	int flag = 1;

	for(int i = 1 ; i < n - 1 ; i++)
	{
	    if(arr[i] > arr[i - 1] and arr[i] > arr[i + 1])
	    {
		flag = 0;
		cout << "YES" << endl << i << " " << i + 1 << " " << i + 2 << endl;
		break;
	    }
	}

	if(flag)
	    cout << "NO" << endl;
    }

    return 0;
}

