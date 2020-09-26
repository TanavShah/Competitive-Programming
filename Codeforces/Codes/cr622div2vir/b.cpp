#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007 
typedef long long ll;

int main()
{

	#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt" , "w" , stdout);
	#endif

	int t;
	cin >> t;
	while(t--)
	{
		int n,x,y;
		cin >> n >> x >> y;
		int sco = x + y;
		int bi,sm;
		bi = min(x + y - 1, n);
		sm = max(x+y +1 -n,1);
		sm = min(n,sm);
		cout << sm << " " << bi << endl;
		
		cout << n << endl;
	}


	return  0;
}	