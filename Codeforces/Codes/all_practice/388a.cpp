//		    Su Saheb?      

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    
    for(int i = 0 ; i < n ; i++)
    {
	cin >> arr[i];
    }

    sort(arr, arr + n);

    int ans = 0;
    for(auto i = 0 ; i < n ; i++)
    {
	if(ans*(arr[i] + 1) <= i)
	{
	    ans++;
	}
    }

    cout << ans << endl;

    return 0;
}

