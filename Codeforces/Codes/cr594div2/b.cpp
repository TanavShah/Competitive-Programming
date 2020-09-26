#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007 

int main()
{

	#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt" , "w" , stdout);
	#endif

	int n;
	cin >> n;
	int arr[n];
	for(int i = 0 ; i < n ; i++)
	{
		cin >> arr[i];
	}
	sort(arr , arr + n , greater<int>());

	long long hor = 0 , ver = 0;
	int t = (n + 1)/2;
	int i;
	for(i = 0 ; i < t ; i++)
	{
		hor += arr[i];
	}
	for( ; i < n ; i++)
	{
		ver += arr[i];
	}
	long long ans = hor*hor + ver*ver;
	cout << ans << endl;


	return  0;
}