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
		long long n;
		cin >> n;
		string s;
		cin >> s;
		long long a1[n],a2[n];

		for(int i = 0 ; i < n ; i++)
		{
			a1[i] = n - i;
			a2[i] = i + 1;
		}

		for(int i = 1 ; i < n ; i++)
		{
			for(int j = i - 1 ; j >= 0 ; j--)
			{
				if(s.at(j) == '<')
				{
					if(a1[j] > a1[j + 1])
						swap(a1[j + 1],a1[j]);
					else if(a2[j] > a2[j + 1])
						swap(a2[j + 1],a2[j]);
					else
						break;
				}
				else
				{
					if(a1[j] < a1[j + 1])
						swap(a1[j + 1],a1[j]);
					else if(a2[j] < a2[j + 1])
						swap(a2[j + 1],a2[j]);
					else
						break;
				}
			}
		}



			




		// vector<int> gr,le,ha;
		// gr.push_back(a1[0]);

		// for(int i = 0 ; i < n - 1 ; i++)
		// {
		// 	if(s.at(i) == '>')
		// 	{
		// 		gr.push_back(a1[i + 1]);
		// 		ha.push_back(0);
		// 	}
		// 	else
		// 	{
		// 		le.push_back(a1[i + 1]);
		// 		ha[ha.size() - 1]++;	
		// 	}
		// }

		// int cnt = 1;
		// for(int i = 0 ; i < n ;)
		// {
		// 	for(;i < n ; i++)
		// 	{
		// 		a1[i] = le[ha[cnt] - ha[cnt - 1]];
		// 	}
			
		// 	a1[i] = gr[cnt - 1];
		// 	cnt++;
		// }


		for(int i = 0 ; i < n ; i++)
		{
			cout << a1[i] << " ";
		}
		cout << endl;

		for(int i = 0 ; i < n ; i++)
		{
			cout << a2[i] << " ";
		}
		cout << endl;
	}


	return  0;
}