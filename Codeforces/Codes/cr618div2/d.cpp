#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007 

int main()
{

	#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt" , "w" , stdout);
	#endif

	long long n;
	cin >> n;

	if(n % 2)
	{
		cout << "NO" << endl;
		return 0;
	}
	long long x[n], y[n];
	double sl[n];
	for(long long i = 0 ; i < n ; i++)
	{
		cin >> x[i] >> y[i];
	}

	for(long long i = 1 ; i < n ; i++)
	{
		if(x[i] == x[i - 1])
			sl[i - 1] = INT_MAX;
		else
		sl[i - 1] = (double)(y[i] - y[i - 1])/(double)(x[i] - x[i - 1]);

	}

	if(x[n - 1] == x[0])
		sl[n - 1] = INT_MAX;
	else
	sl[n - 1] = (double)(y[0] - y[n - 1])/(double)(x[0] - x[n - 1]);

	for(long long i = 0 ; i < n ; i++)
	{
		cout << sl[i] << " ";
	}
	cout << endl;
	for(long long i = 0 ; i < n/2 ; i++)
	{
		if(sl[i] != sl[i + (n/2)])
		{
			cout << "NO" << endl;
			return 0;
		}
	}

	cout << "YES" << endl;

	return  0;
}