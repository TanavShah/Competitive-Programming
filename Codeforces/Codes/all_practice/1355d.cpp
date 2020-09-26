//		    Su Saheb?      

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

int main()
{
    ll n,s;
    cin >> n >> s;
    if(s >= 2*n)
    {
	cout << "YES" << endl;
	for(ll i = 0 ; i < n - 1 ; i++)
	{
	    cout << 2 << " ";
	}
	cout << s - 2*(n - 1) << endl;
	cout << 1 << endl;
    }
    else
    {
	cout << "NO" << endl;
    }

    return 0;
}

