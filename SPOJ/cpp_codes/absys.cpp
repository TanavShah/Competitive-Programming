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
	string ext;
	string eq;
	string op;
	//cin >> ext;
	cin >> eq;
	int a,b,ans;
	int sp1,sp2,sp3,sp4,mpos,eqpos,plpos;
	for(int i = 0 ; i < eq.length() ; i++)
	{
	    if(eq.at(i) == '+')
	    {
		plpos = i;
	    }

	    if(eq.at(i) == '=')
	    {
		eqpos = i;
	    }

	    if(eq.at(i) == 'm')
	    {
		mpos = i;
	    }
	    if(eq.at(i) == ' ')
	    {
		sp1 = i;
		break;
	    }
	}
        for(int i = sp1+1 ; i < eq.length() ; i++)
	{
	    if(eq.at(i) == '+')
	    {
		plpos = i;
	    }

	    if(eq.at(i) == '=')
	    {
		eqpos = i;
	    }

	    if(eq.at(i) == 'm')
	    {
		mpos = i;
	    }

	    if(eq.at(i) == ' ')
	    {
		sp2 = i;
		break;
	    }
	}
     	for(int i = sp2+1 ; i < eq.length() ; i++)
	{
	    if(eq.at(i) == '+')
	    {
		plpos = i;
	    }

	    if(eq.at(i) == '=')
	    {
		eqpos = i;
	    }

	    if(eq.at(i) == 'm')
	    {
		mpos = i;
	    }

	    if(eq.at(i) == ' ')
	    {
		sp3 = i;
		break;
	    }
	}
	for(int i = sp3+1 ; i < eq.length() ; i++)
	{
	    if(eq.at(i) == '+')
	    {
		plpos = i;
	    }

	    if(eq.at(i) == '=')
	    {
		eqpos = i;
	    }

	    if(eq.at(i) == 'm')
	    {
		mpos = i;
	    }

	    if(eq.at(i) == ' ')
	    {
		sp4 = i;
		break;
	    }
	}
	    if(mpos > eqpos)
	    {
		a = stoi(eq.substr(0,sp1));
		b = stoi(eq.substr((sp2+1,sp3-1)));
		ans = a + b;
			    }
	    else
	    {
		if(mpos > plpos)
		{
		    a = stoi(eq.substr((0,sp1)));
		    ans = stoi(eq.substr((sp4+1,eq.length())));
		    b = ans - a;
		}
		else
		{
		    b = stoi(eq.substr((sp2+1,sp3-1)));
                    ans = stoi(eq.substr((sp4+1,eq.length())));
		    a = ans - b;
		}
	    }
//	    op = a + " + " + b + " = " + ans;
	    cout << a << " + " << b << " = " << ans << endl;
    }
    return 0;
}
