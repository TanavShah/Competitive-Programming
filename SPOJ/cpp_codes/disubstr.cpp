//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d" , &t);
    for(int aa = 0 ; aa < t ; aa++)
    {
	string inp;
	cin >> inp;
	set<string> substr1;
	for(int i = 0 ; i < inp.length() ; i++)
	{
//	    string str = (string)inp.at(i);
//	    substr1.insert(str);
	    for(int j = 1 ; j <= inp.length() - i ; j++)
	    {
		string s = inp.substr(i , j);
//		cout << s << endl;
		substr1.insert(s);
	    }
	}
//	for(auto i = substr1.begin() ; i != substr1.end() ; i++)
//	{
//	    cout << *i << endl;
//	}
	cout << substr1.size() << endl;
//	cout << endl;
    }
    return 0;
}
