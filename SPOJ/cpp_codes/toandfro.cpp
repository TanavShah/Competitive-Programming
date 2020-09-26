#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    for(long aaa = 0 ; ; aaa++)
    {
	long n;
	cin >> n;
	if(n==0)
	    break;
	string str;
	cin >> str;
	long size = str.size();
	long rows = size/n;
	if((rows % 2) != 0)
	{
	for(long i = 0 ; i < n ; i++)
	{
	    cout << str.at(i);
	    for(long j = 2 ; j < rows ; j+=2)
	    {
		cout << str.at((j*n) - (i+1));
		cout << str.at((j*n) + i);
	    }
	}
	}
	else
	{
        for(long i = 0 ; i < n ; i++)
	{
	    cout << str.at(i);
	    for(long j = 2 ; j < rows ; j+=2)
	    {
		cout << str.at((j*n) - (i+1));
		cout << str.at((j*n) + i);
	    }
	    cout << str.at((rows*n) - (i+1));
	}
          
	}
	cout << endl;
    }
}
