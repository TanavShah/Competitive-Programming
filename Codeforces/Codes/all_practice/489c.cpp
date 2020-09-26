//		    Su Saheb?      

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

int main()
{
    int m,s;
    cin >> m >> s;
    int ans[m];
    for(int i = 0 ; i < m ; i++)
	ans[i] = 9;

    if(s == 0)
    {
	if(m == 1)
	{
	    cout << 0 << " " << 0 << endl;
	    return 0;
	}
	else
	{
	    cout << -1 << " " << -1 << endl;
	    return 0;
	}
    }

    if(s < 1 or s > 9*m)
    {
	cout << -1 << " " << -1 << endl;
	return 0;
    }

    int tosub = 9*m - s;
    int pos = -1;
    for(int i = 0 ; i < m ; i++)
    {
	if(ans[i] < tosub)
	{
	    tosub -= ans[i];
	    ans[i] = 0;
	    pos = i;
	}
	else
	{
	    ans[i] -= tosub;
	    break;
	}
    }

    int sma[m] = {0};
    int x = ((9*m - s)/8);

    for(int i = 0 ; i < x ; i++)
    {
	sma[i] = 1;
    }
    for(int i = x + 1 ; i < m ; i++)
    {
	sma[i] = 9;
    }
    sma[x] = 9 - (9*m - s + x);

    for(int i = 0 ; i < m ; i++)
	cout << sma[i];

    cout << " ";
    for(int i = m-1 ; i >= 0 ; i--)
    {
	cout << ans[i];
    }
    cout << endl;
    return 0;
}

