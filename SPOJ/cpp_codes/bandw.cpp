//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    while(1)
    {
	string s1,s2;
	cin >> s1 >> s2;
	if((s1 == "*") && (s2 == "*"))
	{
	    break;
	}
	vector<int> pos;
	for(int i = 0 ; i < s1.length() ; i++)
	{
	    if(s1.at(i) != s2.at(i))
	    {
		pos.push_back(i);
	    }
	}
	int cnt = 1;
	if(pos.size() == 0)
	{
	    printf("%d \n" , 0);
	    continue;
	}
	if(pos.size() == s1.length())
	{
	    printf("%d \n" , 1);
	    continue;
	}
	for(int i = 0 ; i < pos.size() - 1 ; i++)
	{
	    if(pos[i + 1] != pos[i] + 1)
	    {
		cnt++;
	    }
	}
//	if(pos[pos.size() - 1] == s1.length())
//	{
//	    cnt++;
//	}
	printf("%d \n" , cnt);
    }
    return 0;
}

