//		    Su Saheb?      

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

int main()
{
    ll n;
    cin >> n;

    ll a[n], b[n];
    ll apos[n + 1] = {0}, bpos[n + 1] = {0};

    for(ll i = 0 ; i < n ; i++)
    {
	cin >> a[i];
	apos[a[i]] = i;
    }

    for(ll i = 0 ; i < n ; i++)
    {
	cin >> b[i];
	bpos[b[i]] = i;
    }

    if(n <= 2)
    {
	cout << n << endl;
	return 0;
    }
    
    ll gap[2*n] = {0};

    for(ll i = 1 ; i <= n ; i++)
    {
	ll dif = apos[i] - bpos[i];
	if(dif < 0)
	{
	    dif += n;
	}

	gap[dif + n]++;
    }

    cout << *max_element(gap, gap + 2*n) << endl;

    return 0;
}

