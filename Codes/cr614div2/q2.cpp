#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007 

int main()
{

	#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt" , "w" , stdout);
	#endif

	int n;
	cin >> n;

	double ans = 0;
	while(n >= 1)
	{
		ans = ans + (double)((double)1/(double)n);
		n--;
	}

	cout << fixed << setprecision(5) << ans << endl;
	return  0;
}