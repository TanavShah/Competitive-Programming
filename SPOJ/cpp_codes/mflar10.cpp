//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    for(long long aa = 0 ; ; aa++)
    {
	int flag = 0;
	int f2 = 0;
	char inp[1200];
	for(long long i = 0 ; ; i++)
	{
	    char x;
	    cin >> x;
	    inp[i] == x;
	    if(inp[0] == '*')
	    {
		flag = 1;
		break;
	    }
	    if(inp[i] == '\n')
	    {
		break;
	    }
	    if((inp[i] == ' ') && (inp[i] != inp[0]))
	    {
		f2 = 1;
		cout << "N" << endl;
		break;
	    }
	}
	if(flag == 1)
	{
	    break;
	}
	if(f2 == 0)
	{
	    cout << "Y" << endl;
	}
    }
    return 0;
}
