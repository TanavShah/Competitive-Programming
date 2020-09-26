//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d" , &t);
    long long n[t];
    long long k[t];
    for(int i = 0 ; i < t ; i++)
    {
	scanf("%lld %lld" , &n[i] , &k[i]);
    }
    long long maxval = n[0];
    for(int i = 1 ; i < t ; i++)
    {
	if(n[i] > maxval)
	{
	    maxval = n[i];
	}
    }
    if(maxval < 2)
    {
	maxval = 2;
    }
    string s[maxval];
    s[0] = "M";
    s[1] = "MF";
    for(int i = 2 ; i < maxval ; i++)
    {
	s[i] = s[i - 1] + s[i - 1];
	for(long long j = s[i - 1].size() ; j < s[i].size() ; j++)
	{
	    if(s[i].at(j) == 'M')
	    {
		s[i].at(j) = 'F';
	    }
	    else
	    {
		s[i].at(j) = 'M';
	    }
	}
    }
    for(int i = 0 ; i < t ; i++)
    {
	if(s[n[i] - 1].at(k[i] - 1) == 'M')
	{
	    cout << "Male" << endl;
	}
	else
	{
	    cout << "Female" << endl;
	}
    }
    return 0;
}
