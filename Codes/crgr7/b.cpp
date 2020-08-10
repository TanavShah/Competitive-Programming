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

long long ans[n];
ans[0] = arr[0];
long long maxi = ans[0];

	for(int i = 1 ; i < n; i++)
	{
		ans[i] = maxi + arr[i];
		maxi = max(maxi, ans[i]);
	}

	for(int i = 0 ; i < n ; i++)
		cout << ans[i] << " ";



	return  0;
}