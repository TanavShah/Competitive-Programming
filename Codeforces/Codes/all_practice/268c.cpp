//		    Su Saheb?      

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

int main()
{
    int n,m;
    cin >> n >> m;
    cout << min(m + 1, n + 1) << endl;
    int x = 0,y = m;
    while(x <= n and y >= 0)
    {
	cout << x << " " << y << endl;
	x++;
	y--;
    }

    return 0;
}

