//		    Su Saheb?      

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

int main()
{
    int n;
    cin >> n;
    pair<int,int> arr[n];
    for(int i = 0 ; i < n ; i++)
    {
	cin >> arr[i].first >> arr[i].second;
    }

    sort(arr, arr + n);
    int ans = min(arr[0].first, arr[0].second);
    
    for(int i = 1 ; i < n ; i++)
    {
	if(min(arr[i].first, arr[i].second) < ans)
	{
	    ans = max(arr[i].first, arr[i].second);
	}
	else
	{
	    ans = min(arr[i].first, arr[i].second);
	}
    }

    cout << ans << endl;

    return 0;
}

