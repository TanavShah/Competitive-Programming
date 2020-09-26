#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    for(int aa = 0 ; aa < 10 ; aa++)
    {
	long total, more;
	cin >> total >> more;
	long k,n;
	k = (total + more)/2;
	n = (total - more)/2;
	cout << k << endl;
	cout << n << endl;
    }
    return 0;
}

