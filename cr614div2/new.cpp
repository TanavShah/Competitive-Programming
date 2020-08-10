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
	scanf("%d" , &t);
	while(t--)
	{
		int n;
		cin >> n;
		string ans = "";
		if(n % 2 == 0)
		{
			int cnt = n/2;
			while(cnt--)
			{
				ans += "1";
			}
			cout << ans << endl;
			continue;
		}
		else
		{
			int cnt = (n/2) - 1;
			while(cnt--)
			{
				ans += "1";
			}
			ans = "7" + ans;
			cout << ans << endl;
			continue;
		}

	}


	return  0;
}