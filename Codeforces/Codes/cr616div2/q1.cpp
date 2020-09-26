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
		string s;
		cin >> s;
		int odd  = 0;
		vector<int> v;

		for(int i = 0 ; i < s.length() ; i++)
			{
				int temp = s.at(i) - '0';
				if(temp % 2){
					odd++;
					v.push_back(temp);
				}
			}

		if(odd >= 2)
		{
			cout << v[0] << v[1] << endl;
			continue;
		}
		else
		{
			cout << -1 << endl;
		}


		// for(int i = 0 ; i < s.length() ; i++)
		// {
		// 	int temp = s.at(i) - '0';
		// 	sum += temp;
		// 	sum %= 2;
		// }

		// if(sum == 0)
		// {
		// 	int cnt = 0;
		// 	while(s.at(s.length() - 1 - cnt) % 2 != 0)
		// 	{
		// 		cnt++;
		// 	}
		// 	if(cnt == s.length())
		// 	{
		// 		cout << -1 << endl;
		// 		continue;
		// 	}
		// 	string ans = s.substr(0 , s.length() - 1 - cnt);
		// 	cout << ans << endl;
		// 	continue;
		// }
		// else
		// {
		// 	int odd = 0;
		// 	for(int i = 0 ; i < s.length() ; i++)
		// 	{
		// 		int temp = s.at(i) - '0';
		// 		if(temp % 2)
		// 			odd++;
		// 	}


		}
	

	return  0;
}