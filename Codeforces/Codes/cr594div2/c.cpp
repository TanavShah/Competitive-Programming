#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007 

int main()
{

	#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt" , "w" , stdout);
	#endif


	long long n,m;
	cin >> n >> m;
	long long mt = max(n , m);


	long long dp[mt];
	dp[0] = 2;
	dp[1] = 4;
	for(long long i = 2 ; i < mt ; i++)
	{
		dp[i] = (dp[i - 1] + dp[i - 2]) % MOD;
	}



	cout << (long long)((dp[m - 1] + dp[n - 1] - dp[0]) % MOD) << endl;


	return  0;
}