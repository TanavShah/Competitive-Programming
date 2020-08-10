//		    Su Saheb?      

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

int main()
{
    ll n,m;
    cin >> n >> m;
    string arr[n + 1];
    
    if(m < (n - 1) or m > 2*n + 2)
    {
	cout << -1 << endl;
	return 0;
    }

    for(int i = 0 ; i <= n ; i++)
    {
	arr[i] = "";
    }

    if(n != 1)
    {
	for(int i = 1 ; i < n ; i++)
	{
	    if(m > 0)
	    {
		arr[i] += "1";
		m--;
	    }
	    else
		break;
	}

	for(int i = 1 ; i < n ; i++)
	{
	    if(m > 0)
	    {
		arr[i] += "1";
		m--;
	    }
	    else
		break;
	}

    }
    
    if(m == 4)
    {
	arr[0] = "11";
	arr[n] = "11";
    }
    else if(m == 3)
    {
	arr[0] = "11";
	arr[n] = "1";
    }
    else if(m == 2)
    {
	arr[0] = "11";
    }
    else if(m == 1)
    {
	arr[0] = "1";
    }

    string ans = "";

    for(int i = 0 ; i < n ; i++)
    {
	ans += arr[i];
	ans += "0";
    }
    ans += arr[n];
    cout << ans << endl;

    return 0;
}

