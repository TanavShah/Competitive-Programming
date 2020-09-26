#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007 


int main()
{

	#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt" , "w" , stdout);
	#endif


	long long n,k;
	cin >> n >> k;
	long long per[n];
	for(long long i = 0 ; i < n ; i++)
	{
		cin >> per[i];
	}

	if(n == k)
	{
		cout << ((long long)((long long)((long long)(n*(n + 1)))/2)) << " " << 1 << endl;
		exit(0);
	}

	vector<long long> pos;

	for(long long i = 0 ; i < n ; i++)
	{
		if(per[i] > (n - k))
			pos.push_back(i);
	}

	if(k == 1)
	{
		cout << n << " " << 1 << endl;
		exit(0);
	}

	vector<long long> val;
	for(long long i = 1 ; i < pos.size() ; i++)
	{
		val.push_back(pos[i] - pos[i - 1]);
	}

	long long ans = val[0];
	for(long long i = 1 ; i < val.size() ; i++)
	{
		ans = (long long)(ans*val[i]) % 998244353;
	}

	long long temp = 0;
	for(long long i = 0 ; i < k ; i++)
	{
		temp += n;
		n--;
	}

	cout << temp << " " << ans << endl;


	return  0;
}