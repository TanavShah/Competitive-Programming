//		    Su Saheb?      

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

int main()
{
    int n,m,k;
    cin >> n >> m >> k;

    int x,y;
    for(int i = 0 ; i < 2*k ; i++)
	cin >> x >> y;

    cout << n*m + n + m - 3 << endl;
    string ans = "";

    for(int i = 0 ; i < n - 1 ; i++)
	ans += "U";

    for(int i = 0 ; i < m - 1 ; i++)
	ans += "L";
    
    string lvlr = "", lvll = "";
    for(int i = 0 ; i < m - 1 ; i++)
    {
	lvlr += "R";
	lvll += "L";
    }

    for(int i = 0 ; i < n ; i++)
    {
	if(i % 2)
	    ans += lvll;
	else
	    ans += lvlr;

	if(i != n - 1)
	    ans += "D";
    }

    cout << ans << endl;

    return 0;
}

