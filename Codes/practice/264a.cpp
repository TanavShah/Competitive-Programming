//		    Su Saheb?      

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

int main()
{
    string s;
    cin >> s;
    
    ll n = s.length();
    ll ans[n];
    ll start = 0;
    ll end = n - 1;

    for(ll i = 0 ; i < n ; i++)
    {
	if(s.at(i) == 'l')
	{
	    ans[end] = i + 1;
	    end--;
	}
	else
	{
	    ans[start] = i + 1;
	    start++;
	}
    }

    for(ll i = 0 ; i < n ; i++)
	cout << ans[i] << endl;

    return 0;
}

