//		    Su Saheb?      

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

int main()
{
    int n;
    cin >> n;
    ll arr[n];
    for(int i = 0 ; i < n ; i++)
	cin >> arr[i];

    ll cost[5];
    for(int i = 0 ; i < 5 ; i++)
	cin >> cost[i];

    ll ans[5] = {0};
    ll bal = 0;

    for(int i = 0 ; i < n ; i++)
    {
	bal += arr[i];
	for(int j = 4 ; j >= 0 ; j--)
	{
	    ll temp = (bal/cost[j]);
	    ans[j] += temp;
	    bal -= (temp*cost[j]);
	}
    }

    for(int i = 0 ; i < 5 ; i++)
	cout << ans[i] << " ";

    cout << endl << bal << endl;

    return 0;
}

