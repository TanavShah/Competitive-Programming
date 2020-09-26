#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long t;
    cin >> t;
    for(long aa = 0 ; aa < t ; aa++)
    {
	long n;
	cin >> n;
	long m[n];
	long w[n];
	for(long i = 0 ; i< n; i++)
	{
	    cin >> m[i];
	}
	for(long i = 0 ; i< n; i++)
	{
	    cin >> w[i];
	}
	long p = sizeof(m)/sizeof(m[0]);
	long q = sizeof(w)/sizeof(w[0]);
	sort(m,m+p);
	sort(w,w+q);
	long sum = 0;
	for(long i = 0 ; i < n ; i++)
	{
	    sum += w[i]*m[i];
	}
	cout << sum << endl;
    }
}
