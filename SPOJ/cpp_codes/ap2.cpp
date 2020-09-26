//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    for(ll aa = 0 ; aa < t ; aa++)
    {
	ll t3,tnm2,sum;
	cin >> t3 >> tnm2 >> sum;
	ll n = (2*sum)/(t3 + tnm2);
	ll d = (tnm2 - t3)/(n - 5);
	ll a = t3 - (2*d);
	cout << n << endl;
	for(ll i = 1 ; i < n+1 ; i++)
	{
	    cout << (a + ((i-1)*d)) << " ";
	}
	cout << endl;
    }
    return 0;
}
