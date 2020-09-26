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
		long long a,b,n,s;
		cin >> a >> b >> n >> s;
		long long temp = s % n;
		if(b >= s)
		{
			cout << "YES" << endl;
			continue;
		}
		if(b >= n - 1 and s <= a*n + b)
		{
			cout << "YES" << endl;
			continue;	
		}
		if(b >= temp and b < n - 1)
		{
			long long t1 = s/n;
			if(a >= t1)
			{
				cout << "YES" << endl;
				continue;
			}
			else
			{
				cout << "NO" << endl;
				continue;
			}
		}
		else
		{
			cout << "NO" << endl;
			continue;
		}
			cout << "NO" << endl;
// int flag = 0;
// 		for(int i = 0 ; i < a ; i++)
// 		{
// 			if(s >= i*n and s <= i*n + b)
// 			{
// 				cout << "YES" << endl;
// 				//cout << i << endl;
// 				flag = 1;
// 				break;
// 			}
// 		}
// 		if(flag == 0)
// 		{
// 			cout << "NO" << endl;
// 			continue;
// 		}
	}


	return  0;
}