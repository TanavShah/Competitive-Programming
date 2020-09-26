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
		long long n,ra;
		cin >> n >> ra;

		long long p1,p2;
		long long temp = 0;
		for(long long k = n - 2 ; k >= 0 ; k--)
		{
			// long long temp = (n*n - n - k*k - k)/2;
			// if(ra < temp)
			// {
			// 	p1 = n - 1 - k;
			// 	break;
			// }

			temp += (n - 1 - k);
			//cout << temp << endl;
			if(ra <= temp)
			{
				p1 = k;
				if(temp != ra)
				{
					temp -= (n - 1 - k);
				}
				break;
			}
		}



		// cout << temp << endl;
		// p2 = n - ra + temp + 1;

		for(int i = 0 ; i < n ; i++)
		{
			if(i + temp == ra)
			{
				p2 = n - i;
				break;
			}
		}
		if(p2 == n)
			p2--;

		if(temp == ra)
		{
			p2 = p1 + 1;
		}


		
		for(long long i = 0 ; i < n ; i++)
		{
			if(i == p1 or i == p2)
				cout << "b";
			else
				cout << "a";
		}
		cout << endl;




	}


	return  0;
}