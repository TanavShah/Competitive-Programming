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
		int n,x;
		cin >> n >> x;
		int deg = 0;

		for(int i = 1 ; i < n ; i++)
		{
			int u,v;
			cin >> u >> v;
			if(u == x or v == x)
				deg++;
		}

		if(n == 1 or deg == 1)
		{
			cout << "Ayush" << endl;
			continue;
		}

		if(n % 2)
			cout << "Ashish" << endl;
		else
			cout << "Ayush" << endl;
	}


	return  0;
}