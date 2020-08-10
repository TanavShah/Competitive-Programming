//		    Su Saheb?      

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

	ll a[n], b[n];

	map<ll, ll> fora, forb;

	for(ll i = 0 ; i < n ; i++)
	{
	    cin >> a[i];
	    fora[a[i]]++;
	}

	for(ll i = 0 ; i < n ; i++)
	{
	    cin >> b[i];
	    forb[b[i]]++;
	}

	int flag = 1;

	if(fora.size() != forb.size())
	{
	    flag = 0;
	}

	for(auto i = fora.begin() ; i != fora.end() ; i++)
	{
	    if(forb[i -> first] != i -> second)
	    {
		flag = 0;
		break;
	    }
	}

	if(n % 2)
	{
	    if(a[n/2] != b[n/2])
		flag = 0;
	}

	ll cnt = 0;
	for(ll i = 0 ; i < n/2 ; i++)
	{
	    if(a[i] == b[i])
		cnt++;
	}

	if(cnt == n/2)
	{
	    for(ll i = (n + 1)/2 ; i < n ; i++)
	    {
		if(a[i] != b[i])
		{
		    flag = 0;
		    break;
		}
	    }
	}

	if(flag)
	    cout << "Yes" << endl;
	else
	    cout << "No" << endl;
    }

    return 0;
}

