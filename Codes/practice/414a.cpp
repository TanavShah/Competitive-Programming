//		    Su Saheb?      

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

int main()
{
    ll n,k;
    cin >> n >> k;

    ll x = k - n/2 + 1;

    if(k < n/2)
    {
	cout << -1 << endl;
	return 0;
    }

    if(n == 1)
    {
	if(k != 0)
	    cout << -1 << endl;
	else
	    cout << 1 << endl;
	
	return 0;
    }

    cout << x << " " << 2*x << " ";
    ll st = 2*x + 1;
    n -= 2;

    while(n >= 2)
    {
	cout << st << " " << st + 1 << " ";
	st += 2;
	n -= 2;
    }

    if(n)
	cout << st;

    cout << endl;



    return 0;
}

