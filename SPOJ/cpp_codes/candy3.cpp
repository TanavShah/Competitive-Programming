#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long t;
    cin >> t;
    for(long long aa = 0 ; aa < t ; aa++)
    {
	long long sum = 0;
	long long n;
	cin >> n;
	for(long long i = 0 ; i < n ; i++)
	{
	    long long a;
	    cin >> a;
	    sum = (sum + a) % n;
	}
	if((sum) == 0)
	{
	    cout << "YES" << endl;
	}
	else
	{
	    cout << "NO" << endl;
	}
    }
    return 0;
}

