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
	int n,k;
	scanf("%d %d" , &n , &k);
	long long h[n];
	for(int i = 0 ; i < n ; i++)
	{
	    scanf("%lld" , &h[i]);
	}
	sort(h,h+n);
	long long ans = h[k-1] - h[0];
	for(int i = 0 ; i <= n - k ; i++)
	{
	    long long x = h[k+i-1] - h[i];
	    if(x < ans)
	    {
		ans = x;
	    }
	}
	cout << ans << endl;
    }
    return 0;
}
