#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007 

int main()
{

	#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt" , "w" , stdout);
	#endif

	int n,q;
	cin >> n >> q;
	int arr[2][n + 2];
	memset(arr , 0 , sizeof(arr));

	int x1 = 0, x2 = 0 , y1 = 0 , y2 = 0;
	int conf = 0;
	for(int i = 0 ; i < q ; i++)
	{
		int a,b;
		cin >> a >> b;
		a--;
		arr[a][b] = 1 - arr[a][b];
		
		if(arr[a][b])
		{
			if(arr[1 - a][b - 1])
				conf++;
			if(arr[1 - a][b])
				conf++;
			if(arr[1 - a][b + 1])
				conf++;
		}
		else
		{
			if(arr[1 - a][b - 1])
				conf--;
			if(arr[1 - a][b])
				conf--;
			if(arr[1 - a][b + 1])
				conf--;
		}

		if(conf)
			cout << "No" << endl;
		else
			cout << "Yes" << endl;
 	}	

	// 	if(i == 0)
	// 	{
	// 		cout << "Yes" << endl;
	// 		continue;
	// 	}

	// 	if(i > 1)
	// 	{
	// 	if(!((x1 == a and x2 == b) or (y1 == a and y2 == b)))
	// 	{
	// 		cout << "No" << endl;
	// 		continue;
	// 	}
	// 	}

	// int flag = 0;
	// for(int i = 1 ; i < n ; i++)
	// {
	// 	if(arr[0][i] and arr[1][i - 1])
	// 	{
	// 		flag = 1;
	// 		x1 = 0;
	// 		x2 = i;
	// 		y1 = 1;
	// 		y2 = i - 1;
	// 		break;
	// 	}

	// 	if(arr[0][i] and arr[1][i])
	// 	{
	// 		flag = 1;
	// 		x1 = 0;
	// 		x2 = i;
	// 		y1 = 1;
	// 		y2 = i;
	// 		break;
	// 	}

	// 	if(i < n - 2)
	// 	{
	// 		if(arr[0][i] and arr[1][i + 1])
	// 		{
	// 			flag = 1;
	// 			x1 = 0;
	// 		x2 = i;
	// 		y1 = 1;
	// 		y2 = i + 1;
	// 			break;
	// 		}
	// 	}
	// }

	// 	if(flag)
	// 	{
	// 		cout << "No" << endl;
	// 	}
	// 	else
	// 		cout << "Yes" << endl;
	
	return  0;
}