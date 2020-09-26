#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007 

int binarySearch(vector<int> arr, int l, int r, int x) 
{ 
  int m = l + (r - l) / 2;
	while (l <= r) { 
		m = l + (r - l) / 2; 

		if (arr[m] == x) 
			return m; 

		if (arr[m] < x) 
			l = m + 1; 

		else
			r = m - 1; 
	} 

	return r; 
} 

int main()
{

	#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt" , "w" , stdout);
	#endif

	string s;
	cin >> s;
	int q;
	cin >> q;
	vector<int> st;
	vector<int> en;
	st.push_back(0);
	int c = 0;
	for(int i = 1 ; i < s.length() ; i++)
	{
		if(s.at(i) == s.at(i - 1))
		{
			continue;
		}
		else
		{
			en.push_back(i - 1);
			c++;
			st.push_back(i);
		}
	}
	if(c > 0)
	{
	if(en[en.size() - 1] != s.length() - 1)
		en.push_back(s.length() - 1);
	}
	else
	{
		en.push_back(s.length() - 1);	
	}

	int n = st.size();

	while(q--)
	{
		int l,r;
		cin >> l >> r;
		if(l == r)
		{
			cout << "Yes" << endl;
			continue;
		}

		l--;
		r--;

		int pos = binarySearch(st , 0 , n - 1 , l);
		if(r <= en[pos])
			cout << "No" << endl;
		else
			cout << "Yes" << endl;
	}


	return  0;
}