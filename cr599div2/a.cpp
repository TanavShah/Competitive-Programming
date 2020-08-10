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
		int n;
		cin >> n;
		long long arr[n];
		for(int i = 0 ; i < n ; i++)
		{
			cin >> arr[i];
		}
		sort(arr , arr + n , greater<int>());

		int cnt = 0;
		for(int i = 0 ; i < n ; i++)
		{
			if(arr[i] >= i + 1)
				cnt++;

			else
				break;
		}
		cout << cnt << endl;
	}



		


	return  0;
	
}