//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
	int n;
	cin >> n;
	int arr[2][n];
//	int arr2[n];
	for(int i = 0 ; i < n ; i++)
	{
	    char temp;
	    cin >> temp;
	    if(temp == '1' || temp == '2')
	    {
		arr[0][i] = 1; 
	    }
	    else
	    {
		arr[0][i] = 2;
	    }
	}
	for(int i = 0 ; i < n ; i++)
	{
	    char temp;
	    cin >> temp;
	    if(temp == '1' || temp == '2')
	    {
		arr[1][i] = 1; 
	    }
	    else
	    {
		arr[1][i] = 2;
	    }
	}
	/*
	for(int i = 0 ; i < 2 ; i++)
	{
	    for(int j = 0 ; j < n ; j++)
	    {
		cout << arr[i][j];
	    }
	    cout << endl;
	}
	*/
	int cnt = 0;
	int flag = 0;
//	int flow = 0;
	int j = 0;
	for(int i = 0 ; i < n ; i++)
	{
	    if(arr[j][i] == 2 && arr[1-j][i] != 2)
	    {
		flag = 1;
		break;
	    }
	   else if(arr[j][i] == 2 && arr[1-j][i] == 2)
	    {
		j = 1 - j;
	    }
	 //   cout << j << endl;
	}
	if(flag == 1)
	{
	    cout << "NO" << endl;
	    continue;
	}
//	cout << j << endl;
	if(j == 1)
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

