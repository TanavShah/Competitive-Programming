//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int aa = 0 ; aa < t ; aa++)
    {
	cout << endl;
	int ng,nm;
	cin >> ng >> nm;
	int god[ng], mech[nm];
	for(int i = 0 ; i < ng ; i++)
	{
	    cin >> god[i];
	}
        for(int i = 0 ; i < nm ; i++)
	{
	    cin >> mech[i];
	}
	int godmax = god[0],mechmax = mech[0];
	for(int i = 1 ; i < ng ; i++)
	{
	    if(god[i] > godmax)
	    {
		godmax = god[i];
	    }
	}
	for(int i = 1 ; i < ng ; i++)
	{
	    if(mech[i] > mechmax)
	    {
		mechmax = mech[i];
	    }
	}
	if(godmax >= mechmax)
	{
	    cout << "Godzilla" << endl;
	}
   	if(godmax < mechmax)
	{
	    cout << "MechaGodzilla" << endl;
	}
    }
    return 0;
}

