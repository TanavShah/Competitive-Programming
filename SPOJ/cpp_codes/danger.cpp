//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    for(long long aa = 0 ; ; aa++)
    {
	string inp;
	cin >> inp;
	if(inp == "00e0")
	{
	    break;
	}
	char ch[] = {inp.at(0) , inp.at(1)};
	string no = ch;
	for(int i = 0 ; i < ((int)inp.at(3)) - 48; i++)
	{
	    no += "0";
	}
	int val = stoi(no);
	for(long long i = 0 ; ; i++)
	{
	    long long v1 = val - (pow(2,i));
	    if(v1 < 0)
	    {
		val = val - (pow(2 , i - 1));
		break;
	    }
	}
	cout << (2*val) + 1 << endl;
    }
    return 0;
}
