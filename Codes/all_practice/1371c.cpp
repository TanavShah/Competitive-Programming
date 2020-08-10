//			Su Saheb?

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
	ll a,b,n,m;
	cin >> a >> b >> n >> m;

	if(a + b < n + m)
	    cout << "No" << endl;
	else if(min(a,b) < m)
	    cout << "No" << endl;
	else
	    cout << "Yes" << endl;
    }

    return 0;
}

