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
			cin >> arr[i];

		int cnt = 0;
		for(int i = 0 ; i < n ; i++)
		{
			if(arr[i] == -1)
				cnt++;
		}

		if(cnt == n)
		{
			cout << 0 << " " << 0 << endl;
			continue;

		}

		set<int> val;

		for(int i = 1 ; i < n - 1 ; i++)
		{
			if(arr[i] == -1)
				continue;

			if(arr[i - 1] == -1 or arr[i + 1] == -1)
				val.insert(arr[i]);
		}

		if(arr[0] != -1 and arr[1] == -1)
			val.insert(arr[0]);
		if(arr[n - 1] != -1 and arr[n - 2] == -1)
			val.insert(arr[n - 1]);

		int diff = INT_MIN;
		for(int i = 1 ; i < n ; i++)
		{
			if(arr[i] == -1 or arr[i - 1] == -1)
				continue;

			diff = max(diff , (max(arr[i],arr[i - 1]) - min(arr[i],arr[i - 1])));
		}

		int less = INT_MAX;
		int more = INT_MIN;

		for(auto i = val.begin() ; i != val.end() ; i++)
		{
			if(*i < less)
				less = *i;

			if(*i > more)
				more = *i;
		}

		int temp = (more - less)/2;
		if((more - less) % 2 == 1)
			temp++;
		int ans = max(diff , temp);

		

		cout << ans << " " << temp + less << endl;


		// int pos1 = -1,pos2=-1;
		// for(int i = 0 ; i < n; i++)
		// {
		// 	if(arr[i] != -1)
		// 	{
		// 		val.push_back(arr[i]);
		// 		pos1 = i;
		// 		break;
		// 	}
		// }

		// for(int i = n - 1 ; i >= 0 ; i--)
		// {
		// 	if(arr[i] != -1)
		// 	{
		// 		val.push_back(arr[i]);
		// 		pos2 = i;
		// 		break;
		// 	}
		// }

		// if(pos1 == pos2)
		// {
		// 	cout << 0 << " " << val[0] << endl;
		// 	continue;
		// }

		// for(int i = pos1 + 1 ; i < pos2 ; )
		// {
		// 	//int cnt = 0;
		// 	int x;
		// 	if(arr[i] == -1)
		// 	{
		// 		x = arr[i - 1];
		// 		while(arr[i] == -1)
		// 		{
		// 			//cnt++;
		// 			i++;
		// 		}
				
		// 		int y = arr[i];
		// 	//cnt++; 
		// 	if((max(x,y) - min(x,y)) % 2 == 0)
		// 	{
		// 		val.push_back((max(x,y) - min(x,y))/2);
		// 	}
		// 	else
		// 	{
		// 		val.push_back(((max(x,y) - min(x,y))/2) + 1);	
		// 	}
		// 	}
		// 	else
		// 		i++;

		// }

		// vector<int> ans;


		// for(int j = 0 ; j < val.size() ; j++)
		// {
		// 	int temp = INT_MIN;
		// 	for(int i = 1 ; i < n ; i++)
		// 	{
		// 		int x = arr[i - 1];
		// 		int y = arr[i];
		// 		// if(x == -1)
		// 		// 	x = val[j];
		// 		// if(y == -1)
		// 		// 	y = val[j];

		// 		if(x == -1 and y == -1)
		// 		{	
		// 			temp = 0;
		// 		}
		// 		else if(x == -1 and y != -1)
		// 		{
		// 			temp = max(temp, val[j]);
		// 		}
		// 		else if(x != -1 and y == -1)
		// 		{
		// 			temp = max(temp, val[j]);	
		// 		}

		// 		else
		// 			temp = max(temp, (max(x,y) - min(x,y)));
		// 	}	

		// 	ans.push_back(temp);
		// }

		// int m = ans[0];
		// int k = -1;
		// for(int i = 0 ; i < ans.size() ; i++)
		// {
		// 	if(ans[i] < m)
		// 	{
		// 		m = ans[i];
		// 		k = 
		// 	}
		// }

		// cout << 
	}


	return  0;
}