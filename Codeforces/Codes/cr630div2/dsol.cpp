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


	ll k;
	cin >> k;
	cout << 2 << " " << 3 << endl;
	
	ll b = 0;
	ll p,r,x;
	x = k;
	r = k;
	int pos;
	ll temp = 1;
	for(pos = 0 ; pos < 64 ; pos++)
	{
		if(temp > k)
			break;
		temp = temp << 1;
	}

	p = temp;
	ll y = pow(2,pos+1) - 1;
	ll a = y;
	cout << a << " " << p << " " << b << endl;
	cout << r << " " << y << " " << x << endl;

	return  0;
}