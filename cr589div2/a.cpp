//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool check(int n)
{
    int arr[10] = {0};
    while(n)
    {
	int dig = n % 10;
	arr[dig]++;
	n = n/10;
    }
    for(int i = 0 ; i < 10 ; i++)
    {
	if(arr[i] > 1)
	{
	    return false;
	}
    }
    return true;
}

int main()
{
    int l,r;
    scanf("%d %d" , &l , &r);
    int flag = 0;
    for(int i = l ; i <= r ; i++)
    {
	if(check(i))
	{
	    cout << i << endl;
	    flag = 1;
	    break;
	}
    }
    if(flag == 0)
    cout << -1 << endl;
    return 0;
}

