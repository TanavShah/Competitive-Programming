#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = n;
    int rows = sqrt(n);
    for(int i = 2 ; i <= rows ; i++)
    {
	ans += (n/i) - i + 1;
    }
    cout << ans << endl;
    return 0;
}
