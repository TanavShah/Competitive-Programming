//		    Su Saheb?      

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

int main()
{
    int n;
    cin >> n;

    int cnt = 0;
    for( ; n % 7 ; n -= 4)
    {
	cnt++;
    }
    
    if(n < 0)
    {
	cout << -1 << endl;
    }
    else
    {
	while(cnt--)
	{
	    cout << 4;
	}
	while(n)
	{
	    cout << 7;
	    n -= 7;
	}
	cout << endl;
    }

    return 0;
}

