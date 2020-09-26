//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    for(int a = 6 ; a <= 100 ; a++)
    {
	for(int b = 2 ; b < a ; b++)
	{
	    for(int c = b + 1 ; c < a ; c++)
	    {
		for(int d = c + 1 ; d < a ; d++)
		{
		    if(a*a*a == b*b*b + c*c*c + d*d*d)
		    {
			cout << "Cube = " << a << ", Triple = (" << b << "," << c << "," << d <<
			")" << endl;
		    }
		}
	    }
	}
    }
    return 0;
}

