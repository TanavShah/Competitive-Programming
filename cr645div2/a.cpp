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
		ll n,m;
		cin >> n >> m;
		ll ans = (n)*(m/2);

		if(m % 2)
		{
			ans += (n/2 + 1); 
		}

		ll ans1 = (m)*(n/2);
		if(n % 2)
			ans1 += (m/2 + 1);

		cout << min(ans, ans1) << endl;
	}
	

	return  0;
}