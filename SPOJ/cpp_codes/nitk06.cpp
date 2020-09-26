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
	int arr[n];
	for(int i = 0 ; i < n ; i++)
	{
	    scanf("%d" , &arr[i]);
	}
	int flag = 0;
	for(int i = 1 ; i < n ; i++)
	{
	    arr[i] -= arr[i - 1];
	    if(arr[i] < 0)
	    {
		cout << "NO" << endl;
		flag = 1;
		break;
	    }
	}
	if(flag)
	{
	    continue;
	}
	if(!arr[n - 1])
	{
	    cout << "YES" << endl;
	}
	else
	{
	    cout << "NO" << endl;
	}
    }
    return 0;
}

