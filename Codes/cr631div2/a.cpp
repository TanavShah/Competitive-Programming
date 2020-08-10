#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll; 

int main()
{

	#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt" , "w" , stdout);
	#endif

	ll t;
	cin >> t;
	while(t--)
	{
		int n,x;
		cin >> n >> x;
		int arr[n];
		for(int i = 0 ; i < n ; i++)
			cin >> arr[i];

		set<int> si;
		si.insert(0);
		for(int i = 0 ; i < n ; i++)
			si.insert(arr[i]);

		int ans = 0;
		vector<int> s;
		for(auto i = si.begin() ; i != si.end() ; i++)
			s.push_back(*i);

		for(int i = 1 ; i < s.size() ; i++)
		{
			int temp = s[i] - s[i - 1] - 1;
			if(temp <= x)
			{
				x -= temp;
				ans = s[i];
			}
			else
			{
				ans = s[i - 1] + x;
				x = 0;
				break;
			}
		}

		if(x > 0)
		{
			ans += x;
		}

		cout << ans << endl;
	}


	return  0;
}