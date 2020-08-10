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
		string a,b,c;
		cin >> a >> b >> c;
		int n = a.length();
		int flag = 0;
		for(int i = 0 ; i < n ; i++)
		{
			if(c.at(i) == a.at(i) or c.at(i) == b.at(i))
				continue;

			else
			{
				flag = 1;
				break;
			}
		}

		if(flag)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
	}


	return  0;
}