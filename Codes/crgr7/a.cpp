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
		int n;
		cin >> n;
		if(n == 1)
		{
			cout << -1 << endl;
			continue;
		}

		string ans = "";
		for(int i = 0 ; i < n - 1 ; i++)
		{
			ans += "5";
		}
		ans += "4";
		cout << ans << endl;
	}


	return  0;
}