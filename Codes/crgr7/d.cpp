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
		string inp;
		cin >> inp;
		string rev = inp;
		reverse(rev.begin(), rev.end());
		string rev1 = rev;

		int pos = -1;
		for(int i = 0 ; i < inp.length() ; i++)
		{
			if(inp.at(i) != rev.at(i))
			{
				pos = i;
				break;
			}
		}

		string s1;
		if(pos == -1)
		{
			cout << inp << endl;
			continue;
		}
		else
		{
			rev = rev.substr(0, pos);
			s1 = rev;
			reverse(rev.begin() , rev.end());
		}

		string temp = s1;
		string ans = s1;

		for(int i = pos + 1 ; i < inp.length() - pos ; i++)
		{
			if(rev1.at(i) == inp.at(pos))
			{

				int j;
			for(j = i + 1 ; j < inp.length() - pos ; j++)
			{
				if(rev1.at(j) != inp.at(pos + j - i))
				{
					break;
				}
			}

			if(j != inp.length() - pos)
				continue;

			if(j == i + 1)
			{
				temp += inp.substr(pos, 1);
				temp += rev;
			}

			else
			{
			if(j == inp.length() - pos)
				j--;

			// cout << pos << endl;
			// cout << i << " " << j << endl;
			// cout << inp.substr(pos, j - i + 1) << endl;

			temp += inp.substr(pos, j - i + 1);
			temp += rev;
}
			if(temp.length() > ans.length())
			{
				
				ans = temp;
			}

			temp = s1;

		}
		}




		reverse(inp.begin(), inp.end());
		rev = inp;
		reverse(rev.begin(), rev.end());
		rev1 = rev;

		pos = -1;
		for(int i = 0 ; i < inp.length() ; i++)
		{
			if(inp.at(i) != rev.at(i))
			{
				pos = i;
				break;
			}
		}

		if(pos == -1)
		{
			cout << inp << endl;
			continue;
		}
		else
		{
			rev = rev.substr(0, pos);
			s1 = rev;
			reverse(rev.begin() , rev.end());
		}

		temp = s1;
		string ans1 = s1;
		

		for(int i = pos + 1 ; i < inp.length() - pos ; i++)
		{
			if(rev1.at(i) == inp.at(pos))
			{

				int j;
			for(j = i + 1 ; j < inp.length() - pos ; j++)
			{
				if(rev1.at(j) != inp.at(pos + j - i))
				{
					break;
				}
			}

			if(j != inp.length() - pos)
				continue;

			if(j == i + 1)
			{
				temp += inp.substr(pos, 1);
				temp += rev;
			}

			else
			{
			if(j == inp.length() - pos)
				j--;

			
		

			temp += inp.substr(pos, j - i + 1);
			temp += rev;
}
			if(temp.length() > ans1.length())
			{
				ans1 = temp;
			}

			temp = s1;
		}
	}


 
		if(ans.length() >= ans1.length())
		{
			cout << ans << endl;
		}
		else
			cout << ans1 << endl;
	}

	return  0;
}