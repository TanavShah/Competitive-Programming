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
		map<int,int> m;
		for(int i = 0 ; i < n ; i++)
		{
			int temp;
			cin >> temp;
			m[temp]++;
		}
		cout <<	m.size() << endl;
	}


	return  0;
}