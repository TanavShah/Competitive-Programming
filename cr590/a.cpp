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
	cin >> n;
	int ans = 0;
	for(int i = 0 ; i < n ; i++)
	{
	    int temp;
	    cin >> temp;
	    ans += temp;
	}
	if(ans % n == 0)
	{
	    cout << (ans/n) << endl;
	    continue;
	}
	else
	{
	    cout << (int)(ans/n) + 1 << endl;
	}
    }
    return 0;
}

