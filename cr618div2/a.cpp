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
		int arr[n];
		int z= 0;
		int pos = 0;
		int neg = 0;
		for(int i = 0 ; i < n ; i++)
		{
			cin >> arr[i];
			if(arr[i] == 0){
				z++;
				arr[i] = 1;
				pos++;
			}
			if(arr[i] > 0)
				pos++;
			if(arr[i] < 0)
				neg++;
		}

		int ans = z;
		
		int sum = 0;
		for(int i = 0 ; i < n ; i++)
			sum += arr[i];

		if(sum == 0)
		{
			
			
				ans++;
			
		}

		cout << ans << endl;
	}


	return  0;
}