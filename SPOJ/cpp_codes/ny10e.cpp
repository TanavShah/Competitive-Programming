//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d" , &t);
    for(int aa = 0 ; aa < t ; aa++)
    {
	long long srno , n;
	scanf("%lld %lld" , &srno , &n);
	long long ans = 1;
	ans = ((n + 1)*(n + 2)*(n + 3)*(n + 4)*(n + 5)*(n + 6)*(n + 7)*(n + 8)*(n + 9))/(362880);
	cout << srno << " " << ans << endl;
    }
    return 0;
}
