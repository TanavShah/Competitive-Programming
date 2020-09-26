#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007 

int main()
{

	#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt" , "w" , stdout);
	#endif


	int n,m,d;
	cin >> n >> m >> d;
	int inp[m];
	int sum = 0;
	for(int i = 0 ; i < m ; i++)
	{
		cin >> inp[i];
		sum += inp[i];
	}
	int arr[n] = {0};

	if((m+1)*(d-1) + sum < n)
	{
		cout << "NO" << endl;
	}
	else
	{
		cout << "YES" << endl;
		int pos = 0;
		for(int i = 2 ; i < d ; i++)
		{
			if((m+1)*(d-i) + sum < n)
			{
				pos = i;
				break;
			}
		}

		int temp =   n - (m+1)*(d-pos) - sum;
		int j = 0;
		for(int i = 0 ; i < m ; i++)
		{
			int t1;
			if(i < temp)
			{
				t1 = d - pos + 1;
			}
			else
			{
				t1 = d - pos;
			}
			if(t1 > d - 1)
				t1 = d - 1;
			for(int p = 0 ; p < t1 ; p++)
			{
				arr[j] = 0;
				j++;
			}
			for(int p = 0 ; p < inp[i] ; p++)
			{
				arr[j] = i + 1;
				j++;
			}
		}
for(int i = 0 ; i < n ; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	}

	
	return  0;
}