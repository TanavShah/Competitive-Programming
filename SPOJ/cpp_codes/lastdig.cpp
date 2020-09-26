#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int aa = 0 ;  aa < t ; aa++)
    {
	int a;
	long b;
	cin >> a >> b;
	int la = a % 10;
	int lb = b % 4;
	if(b == 0)
	{
	    cout << 1 << endl;
	    continue;
	}
	if( la == 0)
	{
	    cout << 0 << endl;
	    continue;
	}
	int val[36];
	for(int i = 0 ; i < 9 ; i++)
	{
	    val[i] = i+1;
	}
	for(int i = 9 ; i < 36 ; i++)
	{
	    val[i] = ((val[i-9])*la) % 10; 
	}
	int p;
	if(lb != 0)
	{
	     p = ((lb - 1)*9) + la - 1;
	}
	else
	{
	    p = 26 + la;
	}
	cout << val[p] << endl;
	continue;
     }
}
