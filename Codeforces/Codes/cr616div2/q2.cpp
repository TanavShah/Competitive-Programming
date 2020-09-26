#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007 

bool met(long long a1[] , long long a2[] , int n)
{
	for(int i = 0 ; i < n ; i++)
	{
		if(a1[i] < a2[i])
			return false;
	}
	return true;
}

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

		long long a[n];
		if(n % 2)
		{
			int i;
			for(i = 0 ; i <= (n/2) ; i++)
			{
				a[i] = i;
			}
			for( ; i < n ; i++)
			{
				a[i] = n - i - 1;
			}
			if(met(arr , a , n))
				cout << "Yes" << endl;
			else
				cout << "No" << endl;
		}
		else
		{
			long long ax[n];
			for(int i = 0 ; i < n/2 - 1 ; i++)
			{
				a[i] = i;
				a[n - i - 1] = i;
				ax[i] = i;
				ax[n - i - 1] = i;
			}

			a[(n/2) - 1] = n/2 - 1;
			a[n/2] = n/2;
			ax[(n/2) - 1] = n/2;
			ax[n/2] = n/2 - 1;			  

			if(met(arr , a , n) or met(arr , ax , n))
				cout << "Yes" << endl;
			else
				cout << "No" << endl;
		}
	}


	return  0;
}