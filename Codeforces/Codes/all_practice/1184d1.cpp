//			Su Saheb?

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

int main()
{
    ll l,k,m,t;
    cin >> l >> k >> m >> t;

    while(t--)
    {
	ll fl, i;
	cin >> fl >> i;

	if(fl == 0)
	{
	    if(i < k)
	    {
		k -= i;
		l -= i;
	    }
	    else
		l = i;
	}
	else
	{
	    if(i > k)
		l++;
	    else
	    {
		k++;
		l++;
	    }
	}

	cout << l << " " << k << endl;
    }

    return 0;
}

