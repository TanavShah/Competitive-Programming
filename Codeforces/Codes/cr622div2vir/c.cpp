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
	int arr[n];
	for(int i = 0 ; i < n ; i++)
		cin >> arr[i];

	int fina[n];
	int ans[n];
	long long tot = 0;
	long long temp = 0;
	for(int i = -1 ; i < n - 1 ; i++)
	{
		memset(ans,0,sizeof(ans));
		if(i == -1)
		{
			ans[0] = arr[0];
			for(int j = 1 ; j < n ; j++)
			{
				ans[j] = min(ans[j - 1], arr[j]);
			}
		}
		else
		{
			int pos = i + 1;
			ans[pos] = arr[pos];
			for(int j = pos + 1 ; j < n ; j++)
			{
				ans[j] = min(ans[j - 1], arr[j]);
			}
			for(int j = pos - 1 ; j >= 0 ; j--)
			{
				ans[j] = min(ans[j + 1], arr[j]);
			}
		}

		temp = 0;
		for(int j = 0 ; j < n ; j++)
		{
			temp += ans[j]; 
		}

		if(temp >= tot)
		{
			tot = temp;
			for(int j = 0 ; j < n ; j++)
			{
				fina[j] = ans[j];
			}
		}
	}
	
	for(int i = 0 ; i < n ; i++)
	{
		cout << fina[i] << " ";
	}
	cout << endl;


	return  0;
}