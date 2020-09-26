//		    Su Saheb?      

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
	ll n,m;
	cin >> n >> m;

	map<ll, ll> p;
	ll sum = 0;

	for(ll i = 0 ; i < m ; i++)
	{
	    ll temp;
	    cin >> temp;
	    sum += temp;
	    p[log2(temp)]++;
	}

	if(sum < n)
	{
	    cout << -1 << endl;
	    continue;
	}

	int bin[64] = {0};
	ll ind = 1;
	ll cnt = 0;
	while(cnt <= 64)
	{
	    if(n & ind)
		bin[cnt] = 1;

	    ind = ind << 1;
	    cnt++;
	}
	
	ll ans = 0;

	for(int i = 0 ; i < 64 ; i++)
	{
	    if(bin[i] == 0)
	    {
		p[i + 1] += (p[i]/2);
		p[i] = p[i] % 2;
		continue;
	    }

	    if(p[i] >= 1)
	    {
		p[i]--;
		p[i + 1] += (p[i]/2);
		p[i] %= 2;
		continue;
	    }
	    
	    for(int j = i + 1 ; j <= 64 ; j++)
	    {
		if(p[j] >= 1)
		{
		  //  cout << j << endl;
		    p[j]--;
		    p[i]++;
		    for(int k = i ; k < j ; k++)
			p[k]++;
		    
		    ans += (j - i);

		    break;
		}
	    }
	}
//	cout << endl;

//	for(int i = 0 ; i < 15 ; i++)
//	{
//	    cout << p[i] << " ";
//	}
//	cout << endl;

	cout << ans << endl;

    }

    return 0;
}

