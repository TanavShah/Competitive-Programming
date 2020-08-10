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
		long long n,s,k;
		cin >> n >> s >> k;
		int arr[k];
		for(int i = 0 ; i < k ; i++)
		{
			cin >> arr[i];
		}

		sort(arr , arr + k);

		int pos;
		for(int i = 0 ; i <= max(s , n - s) ; i++)
		{
			if(s - i > 0 and s - i <= n)
			{
				if(!binary_search(arr , arr + k , s - i))
				{
					pos = i;
					break;
				}
			}

			if(s + i > 0 and s + i <= n)
			{
				if(!binary_search(arr , arr + k , s + i))
				{
					pos = i;
					break;
				}
			}








			// if(i < s and s + i < n)
			// {
			// if(!binary_search(arr , arr + k , s - i) or !binary_search(arr , arr + k , s + i))

			// {
			// 	pos = i;
			// 	break;
			// }
			// }

			// else if(i < s and s + i >= n)
			// {
			// 	if(!binary_search(arr , arr + k , s + i))
			// {
			// 	pos = i;
			// 	break;
			// }	
			// }
			// else
			// {
			// 	if(!binary_search(arr , arr + k , i - s))
			// {
			// 	pos = i;
			// 	break;
			// }		
			// }
		}

		cout << pos << endl;
	}

	return  0;
}