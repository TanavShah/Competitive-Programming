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
		char s[n],t[n];
		//cin >> s >> t;
		for(int i = 0 ; i < n ; i++)
		{
			cin >> s[i];
		}

		for(int i = 0 ; i < n ; i++)
		{
			cin >> t[i];
		}

		int pos[2] = {0};
		int k = 0;
		int cnt = 0;
		int flag = 0;
		for(int i = 0 ; i < n ; i++)
		{
			if(s[i] != t[i])
			{
				cnt++;
				if(cnt > 2)
				{
					flag = 1;
					break;
				}
				pos[k++] = i;
			}
		}

	//	cout << pos[0] << pos[1] << endl;
		//cout << cnt << " " << flag << endl;
		if(flag == 1)
		{
			cout << "NO" << endl;
			continue;
		}
		else
		{
			if(cnt == 1)
			{
				cout << "NO" << endl;
				continue;
			}		
			else
			{
				if(s[pos[0]] == s[pos[1]] and t[pos[0]] == t[pos[1]])
					cout << "YES" << endl;
				else
					cout << "NO" << endl;
			}
		}

	}	


	return  0;
}