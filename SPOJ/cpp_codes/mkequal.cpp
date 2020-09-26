//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d" , &t);
    while(t--)
    {
	int n;
	scanf("%d" , &n);
	long long sum = 0;
	for(int i = 0 ; i < n ; i++)
	{
	    int temp;
	    scanf("%d" , &temp);
	    sum += temp;
	}
	if(sum % n == 0)
	{
	    cout << n << endl;
	}
	else
	{
	    cout << n - 1 << endl;
	}
	
    }
    return 0;
}

