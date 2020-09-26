#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007 

int main()
{

	#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output1.txt" , "w" , stdout);
	#endif

	int arr[11][1000010];
	int div[1000010];

	for(int i = 2 ; i <= 1000000 ; i++)
	{
		if(div[i] == 0)
		{
			for(int j = i ; j <= 1000000 ; j+=i)
			{
				div[j]++;
			}
		}
	} 

	for(int i = 0 ; i < 11 ; i++)
	{
		arr[i][1] = 0;
	}

	for(int i = 0 ; i < 11 ; i++)
	{

		for(int j = 1 ; j < 1000000 ; j++)
		{
			int temp = 0;
			if(div[j] == i)
				temp = 1;
			arr[i][j] = arr[i][j - 1] + temp;
		}
	}

	int t;
	cin >> t;
	while(t--)
	{
		int a,b,n;
		scanf("%d %d %d" , &a , &b , &n);
		printf("%d\n" , arr[n][b] - arr[n][a - 1]);
	}


	return  0;
}