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
		string a="",b="";
		int x = 0;
		for(int i = 0 ; i < n ; i++)
		{
			if(s.at(i) == '1')
			{
				
				if(x == 0){
				a+="0";
				b+="1";
			}
			else
			{
				a+="1";
				b+="0";	
			}
			x = 1;
			}
			else if(s.at(i) == '0')
			{
				a+="0";
				b+="0";
			}
			else
			{
				if(x == 1)
				{
					a+="2";
				b+="0";
			}
			else
			{
				a+="1";
				b+="1";
			}
			}
		}
		cout << a << endl;
		cout << b << endl;
	}

	return  0;
}