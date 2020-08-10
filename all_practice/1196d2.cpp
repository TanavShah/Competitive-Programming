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
	ll n,k;
	string s;
	cin >> n >> k >> s;

	char arr[3] = {'R', 'G', 'B'};
	ll ans = INT_MAX;
	ll cur = 0;

	for(ll sh = 0 ; sh < 3 ; sh++)
	{
	    cur = 0;
	    ll dif[n] = {0};
	    for(ll i = 0 ; i < n ; i++)
		if(s[i] != arr[(i + sh) % 3])
		    dif[i] = 1;
    
	    for(ll i = 0 ; i < n ; i++)
	    {
		cur += dif[i];
		if(i == k - 1)
		    ans = min(ans, cur);
		else if(i >= k)
		{
		    cur -= dif[i - k];
		    ans = min(ans, cur);
		}
	    }
	}

	cout << ans << endl;
    }

    return 0;
}

