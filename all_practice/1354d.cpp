//		    Su Saheb?      

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

int main()
{
    ll n,q;
    cin >> n >> q;

    multiset<ll> ms;
    ll temp;
    while(n--)
    {
	cin >> temp;
	ms.insert(temp);
    }
    
    ll k;
    while(q--)
    {
	cin >> k;
	if(k < 0)
	{
	    k = abs(k);
	    multiset<ll> :: iterator itr = ms.begin();
	    advance(itr, k - 1);
	    ms.erase(itr);
	}
	else
	{
	    ms.insert(k);
	}
    }

    if(ms.size())
	cout << *ms.begin() << endl;
    else
	cout << 0 << endl;

    return 0;
}

