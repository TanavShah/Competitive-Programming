//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long t;
    cin >> t;
    for(long aa = 0 ; aa < t ; aa++)
    {
	long borrow;
	int friends;
	cin >> borrow >> friends;
	int amount[friends];
	long sum = 0;
	for(int i = 0 ; i < friends ; i++)
	{
	    cin >> amount[i];
	    sum += amount[i];
	}
	if(sum < borrow)
	{
	    cout << "Scenario #" << aa+1  << ":"<< endl;
	    cout << "impossible" << endl;
	}
	else
	{
	    long sum1 = 0;
	    sort(amount,amount + friends);
	    for(int i = 0 ; i < friends ; i++)
	    {
		sum1 += amount[friends - i-1];
		if(sum1 >= borrow)
		{
		    cout << "Scenario #" << aa+1  << ":"<< endl;
		    cout << i+1 << endl;
		    break;
		}
	    }
	}
	cout << endl;
    }
    return 0;
}
