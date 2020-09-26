//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void printDistinct(string str , int st , int en) 
{ 
	//int n = str.length(); 

	// count[x] is going to store count of 
	// character 'x' in str. If x is not present, 
	// then it is going to store 0. 
	int count[MAX_CHAR]; 

	// index[x] is going to store index of character 
	// 'x' in str. If x is not present or x is 
	// more than once, then it is going to store a value 
	// (for example, length of string) that cannot be 
	// a valid index in str[] 
	int index[MAX_CHAR]; 

	// Initialize counts of all characters and indexes 
	// of distinct characters. 
	for (int i = 0 ; i < MAX_CHAR; i++) 
	{ 
		count[i] = 0; 
		index[i] = n; // A value more than any index 
					// in str[] 
	} 

	// Traverse the input string 
	for (int i = st; i < en; i++) 
	{ 
		// Find current character and increment its 
		// count 
		char x = str[i]; 
		++count[x]; 

		// If this is first occurrence, then set value 
		// in index as index of it. 
		if (count[x] == 1 && x !=' ') 
			index[x] = i; 

		// If character repeats, then remove it from 
		// index[] 
		if (count[x] == 2) 
			index[x] = n; 
	} 
int cnt = 0;
	// Since size of index is constant, below operations 
	// take constant time. 
	sort(index, index+MAX_CHAR); 
	for (int i=st; i<MAX_CHAR && index[i] != en; i++) 
      cnt++;
	//cout << str[index[i]]; 
  cout << cnt;
} 


int main()
{
    string s;
    cin >> s;
//    cout << s << endl;
    int t;
    cin >> t;
    set<char> fr;
    while(t--)
    {
	int op,c1;
	cin >> op >> c1;
	if(op == 1)
	{
	    char c2;
	    cin >> c2;
	    s.at(c1 - 1) = c2;
	}
	else
	{
	    int c2;
	    cin >> c2;
	 //    for(int i = c1 - 1 ; i < c2 ; i++)
	 //    {
		// fr.insert(s.at(i));
	 //    }
	 //    cout << fr.size() << endl;
	 //    fr.clear();
	    printDistinct(s , c1 - 1 , c2 - 1);
	}
    }
    return 0;
}

