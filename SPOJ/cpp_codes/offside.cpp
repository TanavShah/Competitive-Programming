//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    for(long long aa = 0 ; ; aa++)
    {
	int a,d;
	scanf("%d %d" , &a , &d);
	if(a == 0 && d == 0)
	{
	    break;
	}
	int b[a],c[d];
	for(int i = 0 ; i < a ; i++)
	{
	    scanf("%d" , &b[i]);
	}
	for(int i = 0 ; i < d ; i++)
	{
	    scanf("%d" , &c[i]);
	}
	sort(b,b+a);
	sort(c,c+d);
	if(b[0] >= c[1])
	{
	    cout << "N" << endl;
	}
	else
	{
	    cout << "Y" << endl;
	}
    }
    return 0;
}

