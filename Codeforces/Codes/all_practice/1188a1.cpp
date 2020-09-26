//			Su Saheb?

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

int main()
{
    ll n;
    cin >> n;

    ll deg[n + 1] = {0};

    for(ll i = 0 ; i < n - 1 ; i++)
    {
	ll u,v;
	cin >> u >> v;
	deg[u]++;
	deg[v]++;
    }
    
    bool flag = 0;
    for(ll i  = 1 ; i <= n ; i++)
    {
	if(deg[i] == 2)
	{
	    flag = 1;
	    break;
	}
    }

    if(flag)
	cout << "NO" << endl;
    else
	cout << "YES" << endl;

    return 0;
}

