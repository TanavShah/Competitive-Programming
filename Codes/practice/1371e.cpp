//			Su Saheb?

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

int main()
{
    ll n,p;
    cin >> n >> p;

    ll arr[n];
    for(ll i = 0 ; i < n ; i++)
	cin >> arr[i];

    sort(arr, arr + n);

    ll st = arr[0];

    for(ll i = 0 ; i < n ; i++)
	if(st + i < arr[i])
	    st += (arr[i] - i - st);

    ll en = arr[n - 1];

    ll i = 0;

    while(i <= n and en >= st)
    {
	if((upper_bound(arr, arr + n, i + en) - arr) - i < p)
	    i++;
	else
	    en--;
    }

    if(st > en)
    {
	cout << 0 << endl << endl;
	return 0;
    }

    cout << en - st + 1 << endl;

    for(i = st ; i <= en ; i++)
	cout << i << " ";
    cout << endl;

    return 0;
}

