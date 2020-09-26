//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int ttt(string s)
{
    int c = 0;
    for(int i = 0 ; i < 38 ; i++)
    {
	if((s.at(i) == 'T') && (s.at(i+1) == 'T') && (s.at(i+2) == 'T'))
	{
	    c++;
	}
    }
    return c;
}

int tth(string s)
{
    int c = 0;
    for(int i = 0 ; i < 38 ; i++)
    {
	if((s.at(i) == 'T') && (s.at(i+1) == 'T') && (s.at(i+2) == 'H'))
	{
	    c++;
	}
    }
    return c;
}

int tht(string s)
{
    int c = 0;
    for(int i = 0 ; i < 38 ; i++)
    {
	if((s.at(i) == 'T') && (s.at(i+1) == 'H') && (s.at(i+2) == 'T'))
	{
	    c++;
	}
    }
    return c;
}
int thh(string s)
{
    int c = 0;
    for(int i = 0 ; i < 38 ; i++)
    {
	if((s.at(i) == 'T') && (s.at(i+1) == 'H') && (s.at(i+2) == 'H'))
	{
	    c++;
	}
    }
    return c;
}
int htt(string s)
{
    int c = 0;
    for(int i = 0 ; i < 38 ; i++)
    {
	if((s.at(i) == 'H') && (s.at(i+1) == 'T') && (s.at(i+2) == 'T'))
	{
	    c++;
	}
    }
    return c;
}
int hth(string s)
{
    int c = 0;
    for(int i = 0 ; i < 38 ; i++)
    {
	if((s.at(i) == 'H') && (s.at(i+1) == 'T') && (s.at(i+2) == 'H'))
	{
	    c++;
	}
    }
    return c;
}
int hht(string s)
{
    int c = 0;
    for(int i = 0 ; i < 38 ; i++)
    {
	if((s.at(i) == 'H') && (s.at(i+1) == 'H') && (s.at(i+2) == 'T'))
	{
	    c++;
	}
    }
    return c;
}
int hhh(string s)
{
    int c = 0;
    for(int i = 0 ; i < 38 ; i++)
    {
	if((s.at(i) == 'H') && (s.at(i+1) == 'H') && (s.at(i+2) == 'H'))
	{
	    c++;
	}
    }
    return c;
}

int main()
{
    int t;
    scanf("%d" , &t);
    for(int aa = 0 ; aa < t ; aa++)
    {
	int n;
	scanf("%d" ,  &n);
	string inp;
	cin >> inp;
	cout << n << " " << ttt(inp) << " " << tth(inp) << " " << tht(inp) << " " << thh(inp) << " "
	<< htt(inp) << " " << hth(inp) << " " << hht(inp) << " " << hhh(inp) << endl;
    }
    return 0;
}
