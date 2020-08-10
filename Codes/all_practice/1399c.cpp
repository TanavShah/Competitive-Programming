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
	int n;
	cin >> n;

	int arr[n];
	for(int i = 0 ; i < n ; i++)
	    cin >> arr[i];

	ll ans[2*n + 1] = {0};
	
	sort(arr, arr + n);

	for(int s = 2 ; s <= 2*n ; s++)
	{
	    for(int i = 1 ; i < s/2 ; i++)
	    {
		cout << s << " " << i << endl;
		if(binary_search(arr, arr + n, i) and binary_search(arr, arr + n, s - i))
		{
		    ll t1 = (upper_bound(arr, arr + n, i) - lower_bound(arr, arr + n, i)) + 1;
		    ll t2 = (upper_bound(arr, arr + n, s - i) - lower_bound(arr, arr + n, s - i)) + 1;
		    ans[s] += min(t1, t2);
		    cout << "y" << endl;
		    cout << t1 << " " << t2 << endl;
		}
	    }
	    
	    if(s % 2)
		continue;

	    if(binary_search(arr, arr + n, s/2))
	    {
		ll t1 = (upper_bound(arr, arr + n, s/2) - lower_bound(arr, arr + n, s/2)) + 1;
		ans[s] += (t1/2);
	    }
	}

	for(int i = 0 ; i < 2*n ; i++)
	    cout << ans[i] << " ";
	    cout << endl;

	cout << *max_element(ans, ans + 2*n + 1) << endl;

    }

    return 0;
}

