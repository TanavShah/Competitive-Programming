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
	char arr[n];
	int dp[n];
	for(int i = 0 ; i < n ; i++)
	{
		cin >> arr[i];
		dp[i] = -1;
	}
	
	dp[0] = 0;
	int c = 0;
	bool flag = 0;

	for(int i = 0 ; i < n ; i++)
	{
		if(dp[i] == -1)
		{
			dp[i] = 0;	
		}
		

		for(int j = i + 1 ; j < n ; j++)
		{
			if(arr[j] < arr[i])
			{
				if(dp[j] == 1 - dp[i] or dp[j] == -1)
				{
					dp[j] = 1 - dp[i];
				}
				else
				{
					flag = 1;
					break;
				}
			}
		}
	}


	
	if(flag)
	{
		cout << "NO" << endl;
	}
	else
	{
		cout << "YES" << endl;
		for(int i = 0 ; i < n ; i++)
		{
			cout << dp[i];
		}
		cout << endl;
	}




	return  0;
}