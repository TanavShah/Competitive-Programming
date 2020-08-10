//		    Su Saheb?      

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

ll met(ll a[], ll size)
{
    ll max_so_far = INT_MIN, max_ending_here = 0, start = 0, end = 0, s = 0;

    for(ll i = 0 ; i < size ; i++)
    {
	max_ending_here += a[i];

	if(max_so_far <= max_ending_here)
	{
	    max_so_far = max_ending_here;
	    if(end == 0)
	    {
		start = s;
		end = i;
	    }
	    else
	    {
		if((end - start) < (i - s))
		{
		    start = s;
		    end = i;
		}
	    }
	}

	if(max_ending_here < 0)
	{
	    max_ending_here = 0;
	    s = i + 1;
	}
    }

    ll ans = 0, maxel = INT_MIN;

    cout << start << " " << end << endl;

    for(ll i = start ; i <= end ; i++)
    {
	ans += a[i];
	maxel = max(maxel, a[i]);
    }
    ans -= maxel;

    return ans;
}

int main()
{
    ll n;
    cin >> n;
    ll arr[n];

    for(ll i = 0 ; i < n ; i++)
	cin >> arr[i];

    cout << met(arr, n) << endl;

    return 0;
}

