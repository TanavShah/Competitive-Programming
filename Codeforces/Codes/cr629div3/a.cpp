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
		long long a,b;
		cin >> a >> b;
		if(a < b)
		{
			cout << b - a << endl;
		}
		else
		{
			long long ans = b - (a % b);
			if(ans == b)
			{
				ans = 0;
			}
			cout << ans << endl;
		}
	}
	

	return  0;
}