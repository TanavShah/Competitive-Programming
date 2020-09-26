//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long t;
    scanf("%lld" , &t);
    for(long long aa  = 0 ; aa < t ; aa++)
    {
	int n;
	scanf("%d" , &n);
	double ans = 0;
	for(int i  = 1 ; i <= n ; i++)
	{
	    ans += (double)1/(double)i;
	}
	ans *= n;
	cout << fixed << setprecision(2) << ans << endl;
    }
    return 0;
}
