//			Su Saheb?

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

ll met(ll n)
{
    if(n % 2 == 0)
	return 2;

    for(ll i = 3 ; i <= sqrt(n) ; i += 2)
	if(n % i == 0)
	    return i;

    return n;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
	ll n;
	cin >> n;

	ll k = met(n);
	cout << n/k << " " << n - n/k << endl;
    }

    return 0;
}

