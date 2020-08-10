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
	long long arr[n];
	for(int i = 0 ; i < n ; i++)
	{
		cin >> arr[i];
	}

	int bit[32] = {0}; //1
	for(int i = 31 ; i >= 0 ; i--)
	{
		long long temp = pow(2 , 31 - i);
		for(int j = 0 ; j < n ; j++)
		{
			if((temp ^ arr[j]) < arr[j])
			{
				bit[i]++;
			}
		}
	}

	// for(int i = 0; i < 32 ; i++)
	// {
	// 	cout << bit[i];
	// }
	// cout << endl;

	for(int i = 31 ; i >= 0 ; i--)
	{
		if(bit[i] > ((n)/2))
		{
			bit[i] = 1;
		}
		else
		{
			bit[i] = 0;
		}
	}

	// for(int i = 0; i < 32 ; i++)
	// {
	// 	cout << bit[i];
	// }
	// cout << endl;

	long long x = 0;
	for(int i = 31 ; i >= 0 ; i--)
	{
		x = x + bit[i]*pow(2 , 31 - i);
	}

	long long ans = 0;

	for(int i = 0 ; i < n ; i++)
	{
		if((x ^ arr[i]) > ans)
		{
			ans = (x ^ arr[i]);
		}
	}
	//cout << x << endl;
	cout << ans << endl;

	return  0;
}