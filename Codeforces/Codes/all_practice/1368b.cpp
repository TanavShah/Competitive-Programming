//			Su Saheb?

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

int main()
{
    ll k;
    cin >> k;

    string ans = "codeforces";
    ll cnt[10];
    for(ll i = 0 ; i < 10 ; i++)
	cnt[i] = 1;
    
    ll temp = 1;
    ll val = 1;
    while(1)
    {
	for(ll i = 0 ; i < 10 ; i++)
	{
	    val /= cnt[i];
	    cnt[i] = temp;
	    val *= cnt[i];

	    if(val >= k)
		break;
	}
	temp++;

	if(val >= k)
	    break;
    }

    for(ll i = 0 ; i < 10 ; i++)
    {
	while(cnt[i]--)
	    cout << ans.at(i);
    }
    cout << endl;

    return 0;
}

