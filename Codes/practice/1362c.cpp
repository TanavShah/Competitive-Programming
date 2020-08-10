//		    Su Saheb?      

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    
    ll arr[65];

    for(ll i = 0 ; i <= 64 ; i++)
	arr[i] = pow(2,i + 1) - 1;

    while(t--)
    {
	ll n;
	cin >> n;

	int bin[65] = {0};
	
	ll ind = 1, cnt = 0;
	while(cnt <= 64)
	{
	    if(n & ind) 
		bin[cnt] = 1;

	    ind = ind << 1;
	    cnt++;
	}

	ll ans = 0;
	for(int i = 0 ; i <= 64 ; i++)
	    ans += (bin[i]*arr[i]);

	cout << ans << endl;
    }

    return 0;
}

