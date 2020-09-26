//		    Su Saheb?      

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

bool ap(ll arr[], ll n)
{
    ll dif = arr[1] - arr[0];
    for(ll i = 2 ; i < n ; i++)
    {
	if((arr[i] - arr[i - 1]) != dif)
	    return false;
    }

    return true;
}

pair<bool, ll> add1(ll arr[], ll n)
{
    map<ll, ll> dif;
    for(ll i = 1 ; i < n ; i++)
    {
	dif[arr[i] - arr[i - 1]]++;
    }

    if(dif.size() > 2)
    {
	return {0,0};
    }

    ll d[2];
    ll k = 0;
    for(auto i = dif.begin() ; i != dif.end() ; i++)
    {
	d[k++] = i -> first;
	if(k == 2)
	{
	    if(i -> second != 1)
	    {
		return {0,0};
	    }
	}
    }
    
    if(d[1] == 2*d[0])
    {
	for(ll i = 1 ; i < n ; i++)
	{
	    if(arr[i] - arr[i - 1] == d[1])
	    {
		return {1, (arr[i] + arr[i - 1])/2};
	    }
	}	
    }

    return {0,0};
}

int main()
{
    ll n;
    cin >> n;
    ll arr[n];
    for(int i = 0 ; i < n ; i++)
	cin >> arr[i];

    sort(arr, arr + n);
    
    if(n == 1)
    {
	cout << -1 << endl;
	return 0;
    }

    if(n == 2)
    {
	if((arr[1] - arr[0]) % 2 == 0 and (arr[1] - arr[0] != 0))
	{
	    cout << 3 << endl;
	    cout << arr[0] - (arr[1] - arr[0]) << " " << (arr[0] + arr[1])/2 << " " << arr[1] + arr[1] - arr[0] << endl;
	    return 0;
	}
	else if(arr[1] - arr[0] == 0)
	{
	    cout << 1 << endl;
	    cout << arr[0] << endl;
	    return 0;
	}
	else
	{
	    cout << 2 << endl;
	    cout << 2*arr[0] - arr[1] << " " << 2*arr[1] - arr[0] << endl;
	    return 0;
	}
    }

    if(ap(arr, n))
    {
	if(arr[0] == arr[n - 1])
	{
	    cout << 1 << endl;
	    cout << arr[0] << endl;
	    return 0;
	}
	else
	{
	    cout << 2 << endl;
	    cout << 2*arr[0] - arr[1] << " " << 2*arr[n - 1] - arr[n - 2] << endl;
	    return 0;
	}
    }

    if(add1(arr, n).first)
    {
	cout << 1 << endl;
	cout << add1(arr, n).second << endl;
	return 0;
    }

    cout << 0 << endl;

    return 0;
}

