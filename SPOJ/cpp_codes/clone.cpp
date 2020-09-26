//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    while(1)
    {
	int n,m;
	scanf("%d %d" , &n , &m);
	if(n == 0 and m == 0)
	{
	    break;
	}
	map<string , int> freq;
	for(int i = 0 ; i < n ; i++)
	{
	    string temp;
	    cin >> temp;
	    freq[temp]++;
	}
	map<int , int> m2;
	for(auto i = freq.begin() ; i != freq.end() ; i++)
	{
	    m2[i -> second]++;
	}
	for(int i = 1 ; i <= n ; i++)
	{
	    cout << m2[i] << endl;
	}
    }
    return 0;
}

