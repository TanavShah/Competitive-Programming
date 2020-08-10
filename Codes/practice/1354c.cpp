//		    Su Saheb?      

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

int main()
{
    double pi = acos(-1.0);

    int t;
    cin >> t;
    while(t--)
    {
	int n;
	cin >> n;
	double ans;

	if(n % 2 == 0)
	{
	    ans = 1.0/(double)(tan(pi/(double)(2*n)));
	}
	else
	{
	    ans = (double)cos(pi/(double)(4*n))/(double)sin(pi/(double)(2*n));
	}

	cout << fixed << setprecision(10) << ans << endl;
    }

    return 0;
}

