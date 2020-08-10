#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007 

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
		int n,d;
		cin >> n >> d;
		int arr[n];
		for(int i = 0 ; i < n ; i++)
			cin >> arr[i];


		if(n == 1)
		{
			cout << arr[0] << endl;
			continue;
		}
		for(int i = 1 ; i < n ; i++)
		{
			int temp = min(d/i, arr[i]);
			arr[0] += temp;
			d -= temp*i;
		}
		cout << arr[0] << endl;

	}


	return  0;
		}
