#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long t;
    cin >> t;
    for(long aa = 0; aa < t ; aa++)
    {
	long k;
	cin >> k;
	long ans = 192 + (250*(k-1));
	cout << ans << endl;
    }
}
