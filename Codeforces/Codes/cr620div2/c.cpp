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
		long long n,m;
		cin >> n >> m;
		long long t[n],l[n],h[n];
		for(int i = 0 ; i < n ; i++)
		{
			cin >> t[i] >> l[i] >> h[i];
		}

		long long st = m,en = m;

		int flag = 0;
		for(int i = 0 ; i < n ; i++)
		{

			long long tim = t[i];
			if(i != 0)
				tim -= t[i - 1];
			st = st - tim;
			en = en + tim;

			if(l[i] > en or h[i] < st)
			{
				flag = 1;
				break;
			}

			st = max(st , l[i]);
			en = min(en , h[i]);


		}

	if(flag)
		cout << "NO" << endl;
	else
		cout << "YES" << endl;
	}



	return  0;
}