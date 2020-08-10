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
	string s;
	cin >> s;
	int r = 0;
	int l = 0;
	for(int i = 0 ; i < n ; i++)
	{
		if(s.at(i) == 'L')
			l++;
		else
			r++;
	}
	cout << l + r + 1 << endl;


	return  0;
}