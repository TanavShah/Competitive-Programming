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
		int x;
		cin >> x;
		if(x == 2)
		{
			cout <<1 << " " <<1 << endl;
		}
		else if(x % 2 == 0)
		{
			cout << 2 << " " << x - 2 << endl;
		}
		else
			cout << 1 << " " << x - 1 << endl;	
	}

	return  0;
}