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
	int n,m,k;
	cin >> n >> m >> k;

	int get = n/k;

	if(m <= get)
	{
	    cout << m << endl;
	    continue;
	}

	int left = m - get;
	int dif = ceil((double)(left)/(double)(k - 1));
	cout << get - dif << endl;
    }

    return 0;
}

