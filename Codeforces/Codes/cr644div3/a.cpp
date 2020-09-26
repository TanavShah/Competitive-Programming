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


	ll t;
	cin >> t;
	while(t--)
	{
		int a,b;
		cin >> a >> b;

		int sm = min(a, b);
		int bi = max(a, b);

		int t1 = 2*sm;
		if(t1 >= bi)
		{
			cout << t1*t1 << endl;
		}
		else
		{
			cout << bi*bi << endl;
		}
	}
	

	return  0;
}