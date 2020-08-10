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
		for(int i = 0 ; i < n ; i++)
		{
			cin >> arr[i];
		}

		int cnt = 0;
		for(int i = 1 ; i < n ; i++)
		{
			if(arr[i] == arr[0])
			{
				cnt++;
			}
		}

		if(cnt == n-1)
		{
			cout << 1 << endl;
			for(int i = 0 ; i < n ; i++)
			{
				cout << 1 << " ";
			}
			cout << endl;
			continue;
		}


		int flag = 0;
		int pos = -1;
		for(int i = 0 ; i < n ; i++)
		{
			if(arr[i] == arr[(i+1)%n])
			{
				pos = (i + 1) % n;
				flag = 1;
			}
		}

		if(!flag)
		{
			if(n % 2 == 0)
			{
				cout << 2 << endl;
				for(int i = 0 ; i < n ; i++)
				{
					if(i % 2)
						cout << 2 << " ";
					else
						cout << 1 << " ";
				}
				cout << endl;
			}	
			else
			{
				cout << 3 << endl;
				for(int i = 0 ; i < n - 1 ; i++)
				{
					if(i % 2)
						cout << 2 << " ";
					else
						cout << 1 << " ";
				}
				cout << 3 << endl;
			}
		}
		else
		{
			int ans[n];
			cout << 2 << endl;
			int temp = 1;
			for(int i = pos ; i != (pos) ; i = (i + 1) % n)
			{
				ans[i] = temp;
				temp = 3 - temp;
			}
			for(int i = 0 ; i < n ; i++)
			{
				cout << ans[i] << " ";
			}
			cout << endl;
		}


		// if(n % 2 == 0)
		// {
		// 	cout << 2 << endl;
		// 	for(int i = 0 ; i < n ; i++)
		// 	{
		// 		if(i % 2)
		// 		{
		// 			cout << 1 << " ";
		// 		}
		// 		else
		// 			cout << 2 << " ";
		// 	}
		// 	cout << endl;
		// 	continue;
		// }
		// else
		// {
		// 	if(arr[0] != arr[n - 1])
		// 	{
		// 		if(arr[n - 1] != arr[n - 2])
		// 		{ 
		// 			if(arr[n - 2] == arr[0])
		// 			{
		// 				cout << 2 << endl;
		// 	for(int i = 0 ; i < n - 1 ; i++)
		// 	{
		// 		if(i % 2)
		// 		{
		// 			cout << 1 << " ";
		// 		}
		// 		else
		// 			cout << 2 << " ";

		// 	}
		// 		cout << 1 << endl;
		// 		continue;
		// 			}
		// 			else
		// 			{
		// 		cout << 3 << endl;
		// 		for(int i = 0 ; i < n - 1 ; i++)
		// 	{
		// 		if(i % 2)
		// 		{
		// 			cout << 1 << " ";
		// 		}
		// 		else
		// 			cout << 2 << " ";

		// 	}
		// 		cout << 3 << endl;
		// 		continue;
			
		// }
		// }
		// else
		// {
		// 	cout << 2 << endl;
		// 	for(int i = 0 ; i < n - 1 ; i++)
		// 	{
		// 		if(i % 2)
		// 		{
		// 			cout << 1 << " ";
		// 		}
		// 		else
		// 			cout << 2 << " ";

		// 	}
		// 		cout << 1 << endl;
		// 		continue;
			
		// }

		// 	}
		// 	else
		// 	{
		// 		cout << 2 << endl;
		// 		for(int i = 0 ; i < n ; i++)
		// 	{
		// 		if(i % 2)
		// 		{
		// 			cout << 1 << " ";
		// 		}
		// 		else
		// 			cout << 2 << " ";
		// 	}
		// 	cout << endl;		
		// 	continue;
		// 	}

		// }


	}

	return  0;
}