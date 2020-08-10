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
		int pos[n + 1];
		for(int i = 0 ; i < n ; i++)
		{
			cin >> arr[i];
			pos[arr[i]] = i;
		}
		int cnt = n - 1;
		// int jag = 0;
		// for(int i = 1 ; i <= n ; i++)
		// {
		// 	cnt -= pos[i];
		// 	if(cnt < 0)
		// 	{
		// 		cnt += pos[i];
		// 		jag = i;
		// 		break;
		// 	}
		// }
		// for(int i = pos[1] ; i >= 0 ; i--)
		// {
		// 	swap(arr[i] , arr[i - 1]);
		// }
		// for(int i = pos[2] ; cnt >= 0 ; i--)
		// {
		// 	swap(arr[i] , arr[i - 1]);
		// 	cnt--;
		// }
pos[0] = 0;
int pos1[n + 1];
for(int i = 0 ; i <= n ; i++)
{
	pos1[i] = pos[i];
}
int lim = INT_MIN;
		for(int i = 1 ; i <= n ; i++)
		{
			lim = max(pos1[i - 1] , lim);
			for(int j = pos[i] ; j > lim and cnt > 0 ; j--)
			{
				

				if(arr[j] < arr[j - 1])
			{
				//cout << i << " ";
				swap(arr[j] , arr[j - 1]);
				cnt--;
				pos[arr[j]]++;
				pos[arr[j - 1]]--;
			}
			}
		}
	//	cout << endl;
	//	int op[n];


		// int i = 0;
		// for( ;  i < jag - 1 ; i++)
		// {
		// 	op[i] = i + 1;
		// }



		// for(int j = 0  ; j < n ; j++)
		// {
		// 	if(arr[j] >= jag)
		// 	{
		// 		op[i] = arr[j];
		// 		i++;
		// 	}
		// }

		// int pos1 = 0;
		// for(int j = 0 ; j < n ; j++)
		// {
		// 	if(op[j] == jag)
		// 	{
		// 		pos1 = j;
		// 		break;
		// 	}
		// }

		// for(int j = pos1 ; cnt >= 0 ; j--)
		// {
		// 	swap(op[j] , op[j - 1]);
		// 	cnt--;
		// }

		for(int i = 0 ; i < n ; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}


	return  0;
}