#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007 

long long met(long long x)
{
	if(x < 2)
		return 0;

	return((x*(x - 1))/2);
}

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
		long long n,m;
		cin >> n >> m;

		long long x = (n - m)/(m + 1);
		long long ans = met(n) + n;

		long long modu = (n - m) % (m + 1);
		ans = ans - (modu*(x + 1 + met(x + 1))) - ((m + 1 - modu)*(x + met(x)));
		cout << ans << endl;

	}


	return  0;
}