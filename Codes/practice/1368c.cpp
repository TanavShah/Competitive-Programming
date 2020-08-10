//			Su Saheb?

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

int main()
{
    ll n;
    cin >> n;

    cout << 3*n + 4 << endl;
    cout << 0 << " " << 0 << endl;
    for(ll i = 1 ; i <= n + 1 ; i++)
    {
	cout << i << " " << i << endl;
	cout << i << " " << i - 1 << endl;
	cout << i - 1 << " " << i << endl;
    }

    return 0;
}

