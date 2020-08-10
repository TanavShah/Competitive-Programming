#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007 

bool check(string a , string b)
{
	int l = a.length();
	for(int i = 0 ; i < l ; i++)
	{
		if(a.at(i) != b.at(l - i- 1))
			return false;
	}
	return true;
}

int main()
{

	#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt" , "w" , stdout);
	#endif

	int n,m;
	cin >> n >> m;
	string arr[n];
	for(int i = 0 ; i < n ; i++)
		cin >> arr[i];

	int hash[n] = {0};

	for(int i = 0 ; i < n ; i++)
	{
		if(check(arr[i],arr[i]))
			hash[i] = 1;
	}

	vector<pair<int,int>> v;
	for(int i = 0 ; i < n ; i++)
	{	
		if(hash[i])
			continue;

		for(int j = i + 1 ; j < n ; j++)
		{
			if(hash[j])
				continue;

			if(check(arr[i],arr[j]))
			{
				v.push_back(make_pair(i,j));
			}
		}
	}


	string s = "";

	for(int i = 0 ; i < v.size() ; i++)
	{
		s += arr[v[i].first];
	}

	for(int i = 0 ; i < n ; i++)
	{
		if(hash[i]){
			s += arr[i];
			break;
		}
	}

	for(int i = v.size() - 1 ; i >= 0 ; i--)
	{
		s += arr[v[i].second];
	}	

	cout << s.length() << endl;
	cout << s << endl;
	return  0;
}