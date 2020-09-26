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
	long n;
	cin >> n;
	long ans;
	ans = ((n)*((3*n)+1))/2;
	ans = ans % 1000007;
	cout << ans << endl;
    }
    return 0;
}

