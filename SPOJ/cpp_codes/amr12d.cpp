//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool ispali(string str)
{
    for(int i = 0 ; i < str.length() ; i++)
    {
	if((str.at(i)) != (str.at(str.length() - i - 1)))
	{
	    return false;
	}
    }
    return true;
}

int main()
{
    int t;
    scanf("%d" , &t);
    for(int aa = 0 ; aa < t ; aa++)  
    {
	char s[20];
	scanf("%s" , s);
	if(ispali(s))
	{
	    printf("%s \n" , "YES");
	}
	else
	{
	    printf("%s \n" , "NO");
	}
    }
    
    return 0;
}
