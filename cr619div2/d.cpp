#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007 

int main()
{

	#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt" , "w" , stdout);
	#endif

	int n,m,k;
	cin >> n >> m >> k;

	long long maxi = 2*m*n + (m % 2)*(n/2);
	if(n % 2 == 0)
		maxi += (2*m);

	if(k > maxi){
		cout << "NO" << endl;
		return 0;
	}

	cout << "YES" << endl;

	char arr1[] = {'R','D','L','U','D','R','U','R'};
	char arr2[] = {'L','D','R','U','D','L','U','L'};

	char arr3[] = {'R','D','L','U','D','R','U','R'};
	char arr4[] = {'L','D','R','U','D','L','U','L'};

	int kc = k;
	if(m % 2 == 0)
	{
		if(n % 2 == 0)
		{
			for(int j = 0 ; j < n/2 ; j++){
			for(int i = 0 ; i < (m/2) ; i++)
			{
				if(k == 0)
					return 0;
				char temp;
				if(j % 2 == 0)
				{
					temp = arr1[i % 8];
				}
				else
					temp = arr2[i % 8];

				cout << 1 << " " << temp << endl;
				k--;
			}

		}
		}
		else
		{
			for(int j = 0 ; j < n/2 ; j++){
			for(int i = 0 ; i < (m/2) ; i++)
			{
				if(k == 0)
					return 0;
				char temp;
				if(j % 2 == 0)
				{
					temp = arr1[i % 8];
				}
				else
					temp = arr2[i % 8];

				cout << 1 << " " << temp << endl;
				k--;
			}
			
			if((n/2) % 2 == 0)
			{
				for(int i = 0 ; i < m/2 ; i++)
				{
					if(k == 0)
						return 0;
					cout << 1 << " " << "R" << endl;
					k--;
				}
				for(int i = 0 ; i < m/2 ; i++)
				{
					if(k == 0)
						return 0;
					cout << 1 << " " << "L" << endl;
					k--;
				}
			}	
		}
	}
}
	else
	{
		if(n % 2 == 0)
		{
			for(int j = 0 ; j < n/2 ; j++){
			for(int i = 0 ; i < (m/2) ; i++)
			{
				if(k == 0)
					return 0;
				char temp;
				if(j % 2 == 0)
				{
					temp = arr1[i % 8];
				}
				else
					temp = arr2[i % 8];

				cout << 1 << " " << temp << endl;
				k--;
			}
			cout << 1 << " " << "D" << endl;
			k--;
			if(k == 0)
					return 0;
			cout << 1 << " " << "D" << endl;
			k--;
			if(k == 0)
					return 0;
		}
		}
		else
		{
			for(int j = 0 ; j < n/2 ; j++){
			for(int i = 0 ; i < (m/2) ; i++)
			{
				if(k == 0)
					return 0;
				char temp;
				if(j % 2 == 0)
				{
					temp = arr1[i % 8];
				}
				else
					temp = arr2[i % 8];

				cout << 1 << " " << temp << endl;
				k--;
			}
			cout << 1 << " " << "D" << endl;
			k--;
			if(k == 0)
					return 0;
			cout << 1 << " " << "D" << endl;
			k--;
			if(k == 0)
					return 0;
			}
			if((n/2) % 2 == 0)
			{
				for(int i = 0 ; i < m/2 ; i++)
				{
					if(k == 0)
						return 0;
					cout << 1 << " " << "R" << endl;
					k--;
				}
				for(int i = 0 ; i < m/2 ; i++)
				{
					if(k == 0)
						return 0;
					cout << 1 << " " << "L" << endl;
					k--;
				}
			}	
		}	
	}


	return  0;
}