#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007 

long long gcd(long long x , long long y)
{
	if(y == 0)
		return x;
	return gcd(y , x % y);
}

int main()
{

	#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt" , "w" , stdout);
	#endif


	long long n;
	cin >> n;

	vector<long long> fac;
	if(n == 1)
		cout << 1 << endl;
	else
	{
		for(int i = 2 ; i <= sqrt(n) ; i++)
		{
			if(n % i == 0)
			{
				fac.push_back(i);
				fac.push_back(n/i);
			}
		}

		if(fac.size() == 0)
		{
			cout << n << endl;
		}
		else if(fac.size() == 1)
		{
			cout << sqrt(n) << endl;
		}
		else
		{
			long long ans = gcd(fac[0] , fac[1]);
			for(long long i = 2 ; i < fac.size() ; i++)
			{
				ans = gcd(ans , fac[i]);
			}
			cout << ans << endl;
		}
	}


	return  0;
}