#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    for(long aa = 0; ; aa++)
    {
	long n;
	cin >> n;
	if(n==0)
	{
	    exit(0);
	}
	long ans = ((n)*(n+1)*((2*n)+1))/6;
	cout << ans << endl;
    }
}
