//		    Su Saheb?      

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

int main()
{
    ll n;
    cin >> n;
    int size = 10000001;
    int sieve[10000001] = {0};

    for(ll i = 0 ; i < n ; i++)
    {
	int temp;
	cin >> temp;
	sieve[temp]++;
    }

    ll m;
    cin >> m;

    cout << 1 << endl;

    bool prime[size] = {1};
    for(ll p = 2 ; p*p < size ; p++)
    {
	if(prime[p])
	{
	    for(ll i = 2*p ; i < size ; i += p)
	    {
		prime[i] = 0;
		sieve[p] += sieve[i];
	    }
	}
    }

    vector<ll> ans;
    vector<ll> plist;
    for(ll i = 2 ; i < size ; i++)
    {
	if(prime[i])
	{
	    plist.push_back(i);
	    ans.push_back(sieve[i]);
	}
    }

    for(ll i = 1 ; i < ans.size() ; i++)
    {
	ans[i] += ans[i - 1];
    }

    cout << 0 << endl;

    for(ll i = 0 ; i < m ; i++)
    {
	ll l,r;
	cin >> l >> r;

	ll low = lower_bound(plist.begin(), plist.end(), l) - plist.begin();
	ll high = upper_bound(plist.begin(), plist.end(), r) - plist.begin();

	ll finans = ans[high] - ans[low];
	cout << finans << endl;
    }
    

    
    return 0;
}

