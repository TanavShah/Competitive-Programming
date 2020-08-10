//		    Su Saheb?      

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
	int n;
	cin >> n;
	int a,b,c,d;
	cin >> a >> b >> c >> d;
	if(((c + d) < n*(a - b)) or ((c - d) > n*(a + b)))
	    cout << "NO" << endl;
	else
	    cout << "YES" << endl;
    }

    return 0;
}

