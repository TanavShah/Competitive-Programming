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
	long long arr[n];
	for(long long i = 0 ; i < n ; i++)
	{
		cin >> arr[i];
	}

	sort(arr, arr + n , greater<long long>());
	
	long long hash[n] = {0};

	hash[0] = 1;
	long long ans[n];
	ans[0] = arr[0];

	long long f = ans[0];

	long long pos = 0;

	for(long long i = 1 ; i < n ; i++)
	{
		long long flag = 0;
		for(long long j = 1 ; j < n ; j++)
		{
			if(hash[j] == 0 and arr[j] != f)
			{
				ans[i] = arr[j];
				f = (f|arr[j]) - arr[j];
				hash[j] = 1;
				pos = i;
				flag = 1;
				break;
			}
		}
		if(flag == 0)
		{
			for(long long j = 1 ; j < n ; j++)
		{
			if(hash[j] == 0)
				ans[i] = arr[j];

			f = 0;
		}		
		}


	}
	// pos++;
	// if(pos != n - 1)
	// {
	// 	for(long long j = 1 ; j < n ; j++)
	// 	{
	// 		if(hash[j] == 0)
	// 			ans[pos++] = arr[j];
	// 	}
	// }

	//cout << f << endl;

	for(long long i = 0 ; i < n ; i++)
	{
		cout << ans[i] << " ";
	}
	cout << endl;


	return  0;
}