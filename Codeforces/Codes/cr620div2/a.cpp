#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007 

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
		long long x,y,a,b;
		cin >> x >> y >> a >> b;
		if(((y - x) % (a + b)) == 0)
			cout << ((y-x)/(a+b)) << endl;
		else
			cout << -1 << endl;
	}


	return  0;
}