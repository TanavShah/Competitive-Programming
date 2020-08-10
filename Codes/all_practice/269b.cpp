//		    Su Saheb?      

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

ll lis(vector<ll> arr, ll n)
{
    ll lis[n];
    lis[0] = 1;

    for(ll i = 1 ; i < n ; i++)
    {
	lis[i] = 1;
	for(ll j = 0 ; j < i ; j++)
	    if(arr[i] >= arr[j] and lis[i] < lis[j] + 1)
		lis[i] = lis[j] + 1;
    }

    return *max_element(lis, lis + n);
}

int main()
{
    int n,m;
    cin >> n >> m;
    vector<ll> x;

    double d;
    for(ll i = 0 ; i < n ; i++)
    {
	ll temp;
	cin >> temp;
	cin >> d;
	if(x.size() == 0)
	{
	    x.push_back(temp);
	    continue;
	}

	if(temp != x[x.size() - 1])
	    x.push_back(temp);
    }

    n = x.size();

    cout << 0LL + n - lis(x, n) << endl;

    return 0;
}

