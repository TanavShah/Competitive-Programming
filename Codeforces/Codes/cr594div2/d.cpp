#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007 

bool met(string expr) 
{ 
	stack<char> s; 
	char x; 

	// Traversing the Expression 
	for (int i=0; i<expr.length(); i++) 
	{ 
		if (expr[i]=='(') 
		{ 
			// Push the element in the stack 
			s.push(expr[i]); 
			continue; 
		} 

		// IF current current character is not opening 
		// bracket, then it must be closing. So stack 
		// cannot be empty at this point. 
		if (s.empty()) 
		return false; 

		switch (expr[i]) 
		{ 
		case ')': 

			// Store the top element in a 
			x = s.top(); 
			s.pop(); 
			
			break; 

		
		} 
	} 

	// Check Empty Stack 
	return (s.empty()); 
} 

int main()
{

	#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt" , "w" , stdout);
	#endif

	int n;
	cin >> n;
	string s;
	cin >> s;
	int ans = met(s);
	int pos1 = 1 , pos2 = 1;
//	cout << ans << endl;
	// for(int i = 0 ; i < n - 1 ; i++)
	// {
	// 	for(int j = i + 1 ; j < n ; j++)
	// 	{
	// 		if(i == j)
	// 			continue;

	// 		string x = s;
	// 		char temp = x.at(i);
	// 		x.at(i) = x.at(j);
	// 		x.at(j) = temp;

	// 		int p = met(x);
	// 		if(p > ans)
	// 		{
	// 			ans = p;
	// 			pos1 = i + 1;
	// 			pos2 = j + 1;
	// 		}
	// 	}
	// }

	
	
	cout << ans << endl;
	cout << pos1 << " " << pos2 << endl;
	return  0;
}