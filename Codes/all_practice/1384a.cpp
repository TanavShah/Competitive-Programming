//			Goli Beta, Masti Nai...

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
	ll n;
	cin >> n;

	ll arr[n];
	for(ll i = 0 ; i < n ; i++)
	    cin >> arr[i];

	char add = 'a';
	int offset = 0;
	
	string prev = "";
	for(int i = 0 ; i < 200 ; i++)
	    prev += (char)(add + offset);

	cout << prev << endl;

	for(int i = 0 ; i < n ; i++)
	{
	    string ans = prev.substr(0, arr[i]);
	    offset = (offset + 1) % 26;
	    
	    if(prev.at(arr[i]) == (char)(add + offset))
		offset = (offset + 1) % 26;

	    while(ans.length() < 200)
		ans += (char)(add + offset);

	    cout << ans << endl;
	    prev = ans;
	}
    }

    return 0;
}

