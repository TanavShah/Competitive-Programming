//		    Su Saheb?      

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

int main()
{
    int n,m;
    cin >> n >> m;
    string arr[n];
    int cnt[m][26];
    memset(cnt, 0, sizeof(cnt));

    for(int i = 0 ; i < n ; i++)
    {
	cin >> arr[i];
	for(int j = 0 ; j < m ; j++)
	{
	    cnt[j][arr[i][j] - 'A']++;
	}
    }

    ll ans = 1;

    for(int i = 0 ; i < m ; i++)
    {
	int temp = 0;
	for(int j = 0 ; j < 26 ; j++)
	{
	    if(cnt[i][j] != 0)
	    {
		temp++;
	    }
	}
	ans = (ans*temp) % MOD;
    }

    cout << ans << endl;    

    return 0;
}

