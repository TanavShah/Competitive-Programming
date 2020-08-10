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
		ll n;
		cin >> n;
		ll arr[n];
		for(ll i = 0 ; i < n ; i++)
			cin >> arr[i];

		ll maxi = -1;
		ll pos = -1;
		for(ll i = 0 ;i < n ; i++)
		{
			if(arr[i] > maxi)
			{
				maxi = arr[i];
				pos = i;
			}

		}

		ll l1 = maxi, l2 = n - maxi;
		ll fir[maxi + 1] = {0};
		fir[0] = 1;
		int flag1 = 0;

		for(ll i = 0 ; i < maxi ; i++)
		{
			if(arr[i] > maxi)
			{
				flag1 = 1;
				break;
			}

			fir[arr[i]]++;
		}

		for(ll i = 0 ; i <= maxi ; i++)
		{
			if(fir[i] != 1)
			{
				flag1 = 1;
				break;
			}
		}

		ll sec[n - maxi + 1]={0};
		sec[0] = 1;

		for(ll i = n - 1 ; i >= (maxi) ; i--)
		{
			if(arr[i] > (n - maxi))
			{
				flag1 = 1;
				break;
			}
			sec[arr[i]] = 1;
		}
		for(ll i = 0 ; i <= (n - maxi) ; i++)
		{
			if(sec[i] != 1)
			{
				flag1 = 1;
				break;
			}
		}




		l1 = n - maxi, l2 = maxi;
		ll fir1[n - maxi + 1] = {0};
		fir1[0] = 1;
		int flag2 = 0;

		for(ll i = 0 ; i < (n - maxi) ; i++)
		{
			if(arr[i] > (n - maxi))
			{
				flag2 = 1;
				break;
			}
			fir1[arr[i]]++;
		}

		for(ll i = 0 ; i <= (n - maxi) ; i++)
		{

			if(fir1[i] != 1)
			{
				flag2 = 1;
				break;
			}
		}

		ll sec1[maxi + 1]={0};
		sec1[0] = 1;

		for(ll i = n - 1 ; i >= (n - maxi) ; i--)
		{
			if(arr[i] > (maxi))
			{
				flag2 = 1;
				break;
			}
			sec1[arr[i]] = 1;

		}


		for(ll i = 0 ; i <= (maxi) ; i++)
		{
		
			if(sec1[i] != 1)
			{
				flag2 = 1;
				break;
			}
		}


		// cout << "f " << flag1 << " " << flag2 << " " << maxi << endl;

		if((flag1 == 0 or flag2 == 0) and (l1 == l2))
		{
			cout << 1 << endl;
			cout << l1 << " " << l2 << endl;
			continue;
		}

		if(flag1 == 1 and flag2 == 1)
		{
			cout << 0 << endl;
			continue;
		}

		if(flag1 == 1 and flag2 == 0)
		{
			cout << 1 << endl;
			cout << n - maxi << " " << maxi << endl;
			continue;
		}

		if(flag1 == 0 and flag2 == 1)
		{
			cout << 1 << endl;
			cout << maxi << " " << n - maxi << endl;
			continue;
		}

		if(flag1 == 0 and flag2 == 0)
		{
			cout << 2 << endl;
			cout << n - maxi << " " << maxi << endl;
			cout << maxi << " " << n - maxi << endl;
			continue;
		}







		// ll pos[2];
		// pos[0] = -1;
		// pos[1] = -1;
		// ll k = 0;
		// for(ll i = 0 ; i < n ; i++)
		// {
		// 	if(arr[i] == 1)
		// 		pos[k++] = i;
		// }

		// if(pos[0] == -1 or pos[1] == -1)
		// {
		// 	cout << 0 << endl << 0 << endl;
		// 	continue;
		// }

		// ll rig = -1, lef = -1;
		// ll firmax = -1, secmax = -1;
		// for(ll i = 0 ; i <= pos[0] ; i++)
		// {
		// 	firmax = max(arr[i], firmax);
		// }
		// for(ll i = n - 1 ; i >= pos[1] ; i--)
		// {
		// 	secmax = max(secmax, arr[i]);
		// }

		// ll hash[firmax+1] = {0};
		// hash[0] = 1;
		// ll sum = 0;
		// int flag = 0;

		// for(ll i = 0 ; i < firmax ; i++)
		// {
		// 	if(arr[i] <= firmax)
		// 	{
		// 		hash[arr[i]] += 1;
		// 		if(hash[arr[i]] == 2)
		// 		{
		// 			flag = 1;
		// 			break;
		// 		}
		// 	}

		// 	else
		// 	{
		// 		flag = 1;
		// 		break;
		// 	}
		// }

		// if(flag)
		// {
		// 	cout << 0 << endl << 0 << endl;
		// 	continue;	
		// }


		


		// ll hash1[secmax+1] = {0};
		// hash1[0] = 1;
		// ll sum1 = 0;
		// int flag1 = 0;

		// for(ll i = n - 1 ; i >= (n - secmax) ; i--)
		// {
		// 	if(arr[i] <= secmax)
		// 	{
		// 		hash1[arr[i]] += 1;
		// 		if(hash1[arr[i]] == 2)
		// 		{
		// 			flag = 1;
		// 			break;
		// 		}
		// 	}

		// 	else
		// 	{
		// 		flag1 = 1;
		// 		break;
		// 	}
		// }

		// if(flag1)
		// {
		// 	cout << 0 << endl << 0 << endl;
		// 	continue;	
		// }

		


		// if((firmax - 1) >= (n - secmax))
		// {
		// 	cout << 0 << endl << 0 << endl;
		// 	continue;	
		// }

		// if(firmax == (n - secmax))
		// {
		// 	cout << 1 << endl;
		// 	cout << firmax << " " << n - secmax << endl;
		// 	continue;
		// }

		




	}


	return  0;
}