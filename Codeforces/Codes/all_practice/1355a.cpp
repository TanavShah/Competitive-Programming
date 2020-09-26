//		    Su Saheb?      

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

pair<int,int> dig (ll x)
{
    int sm = 10, bi = -1;
    while(x)
    {
	int temp = x % 10;
	sm = min(sm, temp);
	bi = max(bi, temp);
	x /= 10;
    }
    return {sm, bi};
}

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
	ll a1, k;
	cin >> a1 >> k;

	if(k == 1)
	{
	    cout << a1 << endl;
	    continue;
	}

	ll cnt = 1;
	int flag = 0;

	while(1)
	{
	    pair<int, int> toadd = dig(a1);
	    a1 += (toadd.first*toadd.second);
	    cnt++;
	    if(cnt == k)
	    {
		flag = 1;
		cout << a1 << endl;
		break;
	    }
	    if(toadd.first == 0)
	    {
		break;
	    }
	}

	if(!flag)
	{
	    cout << a1 << endl;
	}
    
    }

    return 0;
}

