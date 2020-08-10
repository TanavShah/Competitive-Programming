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
	ll n;
	cin >> n;

	ll arr[n];
	for(ll i = 0 ; i < n ; i++)
	    cin >> arr[i];
	    
	vector<ll> b0, b1;
	for(ll i = 0 ; i < n ; i++)
	{
	    int temp;
	    cin >> temp;

	    if(temp)
		b1.push_back(arr[i]);
	    else
		b0.push_back(arr[i]);
	}
	
	if(b0.size() == 0)
	{
	    if(is_sorted(b1.begin(), b1.end()))
	    {
	       cout << "Yes" << endl;
	       continue;
	    }
	    else
	    {
		cout << "No" << endl;
		continue;
	    }
	}

	if(b1.size() == 0)
	{
	    if(is_sorted(b0.begin(), b0.end()))
	    {
	       cout << "Yes" << endl;
	       continue;
	    }
	    else
	    {
		cout << "No" << endl;
		continue;
	    }
	}

	cout << "Yes" << endl;
    }

    return 0;
}

