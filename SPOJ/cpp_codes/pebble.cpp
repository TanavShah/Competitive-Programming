//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    int cnt = 1;
    while(cin >> str)
    {
	int ans = 0;
	int i;
	for(i = 0 ; i < str.length() - 1 ; i++)
	{
	    if(str.at(i) == '1' and str.at(i + 1) == '0')
	    {
		ans += 2;
	    }
	}
	if(str.at(i) == '1')
	{
	    ans++;
	}
	printf("Game #%d: %d\n" , cnt++ , ans);
    }
    return 0;
}

