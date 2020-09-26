//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>
#include <cstdio>

using namespace std;

int main()
{
    int t;
    scanf("%d" , &t);
    for(int aa = 0 ; aa < t ; aa++)
    {
	int n;
	scanf("%d" , &n);
	char s[100];
	//string s;
	map<string , int> inp;
	for(int i = 0 ; i <= n ; i++)
	{
	    fgets(s,50,stdin);
	    //scanf("%[^\n]%*c" , s);
	    //s[33] = NULL;
	    inp[(string)s]++;
	//    string s;
	 //   stringstream ss;
	  //  getline(cin , s);
	  //  ss << s;
	   // inp[s]++;
	}
	//vector<pair<string,int>> oup;
	for(auto i = ++inp.begin() ; i != inp.end() ; i++)
	{
	    cout << i -> first << i -> second;
	}
	cout << endl;
    }
    return 0;
}
