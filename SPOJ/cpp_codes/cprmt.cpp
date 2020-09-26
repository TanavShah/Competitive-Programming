//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string astr;
    while(cin >> astr)
    {
	string bstr;
	cin >> bstr;
	int a[26] = {0} , b[26] = {0} , ans[26] = {0};
	for(int aa = 0 ; aa < astr.size() ; aa++)
	{
	    a[(int)astr.at(aa) - 97]++;
	}
        for(int aa = 0 ; aa < bstr.size() ; aa++)
	{
	    b[(int)bstr.at(aa) - 97]++;
	}
	for(int i = 0 ; i < 26 ; i++)
	{
	    ans[i] = min(a[i] , b[i]);
	}
	for(int i = 0 ; i < 26 ; i++)
	{
	    for(int j = 0 ; j < ans[i] ; j++)
	    {
		char ch = i + 97;
		cout << ch;
	    }
	}
	cout << endl;
    }
    return 0;
}
