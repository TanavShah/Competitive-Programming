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
	int n;
	cin >> n;

	if(n < 4)
	{
	    cout << -1 << endl;
	    continue;
	}

	if(n % 2)
	{
	    int last = n;
	    while(last >= 1)
	    {
		cout << last << " ";
		last -= 2;
	    }

	    cout << 4 << " " << 2 << " ";

	    last = 6;
	    while(last <= n - 1)
	    {
		cout << last << " ";
		last += 2;
	    }
	}
	else
	{
	    int last = n - 1;
	    while(last >= 1)
	    {
		cout << last << " ";
		last -= 2;
	    }

	    cout << 4 << " " << 2 << " ";

	    last = 6;
	    while(last <= n)
	    {
		cout << last << " ";
		last += 2;
	    }
	}
	cout << endl;

    }

    return 0;
}

