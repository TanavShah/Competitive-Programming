//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long inp;
    cin >> inp;
    if((inp & (inp -1)) == 0)
    {
	cout << "TAK" << endl;
    }
    else
    {
	cout << "NIE" << endl;
    }
    return 0;
}
