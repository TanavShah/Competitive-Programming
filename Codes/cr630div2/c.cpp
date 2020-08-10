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

	int t;
	cin >> t;
	while(t--)
	{
		int n,k;
		cin >> n >> k;
		string inp;
		cin >> inp;
		string arr[n/k];
		for(int i = 0 ; i < n ; i+=k)
		{
			arr[i/k] = inp.substr(i,k);
			
		}

		ll cnt = 0;
		for(int i = 0 ; i < k ; i++)
		{
			int fr[26] = {0};
			for(int j = 0 ; j < n/k ; j++)
			{
				fr[arr[j].at(i) - 'a']++;

				fr[arr[j].at(k - i - 1) - 'a']++;
			}
		 sort(fr, fr + 26);

			int maxi = fr[25];
			cnt += (2*(n/k) - maxi);
		}
		cout << cnt/2 << endl;
	}


	return  0;
}