//		    Su Saheb?      

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

int main()
{
    ll n;
    cin >> n;

    if(n == 1)
    {
	cout << 1 << endl;
	return 0;
    }

    if(n == 2)
    {
	cout << 2 << endl;
	return 0;
    }

    if(n == 3)
    {
	cout << 6 << endl;
	return 0;
    }

    if(n % 2)
	cout << n*(n - 1)*(n - 2) << endl;
    else
    {
	if(n % 3)
	    cout << n*(n - 1)*(n - 3) << endl;
	else
	    cout << (n - 1)*(n - 2)*(n - 3) << endl;
    }

    return 0;
}

