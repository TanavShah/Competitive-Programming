//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int aa = 0 ; aa < t ; aa++)
    {
	long long n;
	cin >> n;
	long long ans = ((n)*(n+2)*((2*n)+1))/8;
	cout << ans << endl;
    }
    return 0;
}

