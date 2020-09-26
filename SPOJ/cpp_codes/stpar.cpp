//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;
stack<int> ini;
stack<int> fin;
stack<int> ext;
stack<int> ini1;

bool check(int r)
{
    if(ext.empty())
    {
	return false;
    }
    else
    {
    ini1.push(ext.top());
    ext.pop();
    if(ext.empty())
    {
	ext.push(ini1.top());
	ini1.pop();
	return false;
    }
    int c = 0;
    for(int pp = 0 ; ; pp++)
    {
	if(ext.top() == r)
	{
	    c = 1;
	}
	ini1.push(ext.top());
	ext.pop();
	if(ext.empty())
	{
	    break;
	}
    }
	for(int qq = 0 ; ; qq++)
	{
    	    if(ini1.empty())
	    {
		break;
	    }
	    ext.push(ini1.top());
	    ini1.pop();

	}
    if(c == 0)
    {
	return false;
    }
    else
    {
	return true;
    }
}	    
}

int transfer(int p)
{
    int xx = 0;
    if(!ext.empty())
    {
    if(ext.top() == p)
    {
	fin.push(ext.top());
	ext.pop();
	xx = 1;
	return xx;
    }
    if(check(p))
    {
	xx = 0;
	return xx;
    }
    }
    while(ini.top() != p)
    {
	if(ini.empty())
	{
	    break;
	}
	ext.push(ini.top());
	ini.pop();
    }
    if(!ini.empty())
    {
    fin.push(ini.top());
    ini.pop();
    xx = 1;
    return xx;
    }
    else
    {
	xx = 0;
	return xx;
    }
}

int main()
{
    for(long long aa = 0 ; ; aa++)
    {
	int n;
	cin >> n;
	if(n == 0)
	{
	    break;
	}
	for(int i = 0 ; i < n ; i++)
	{
	    int a;
	    cin >> a;
	    ini1.push(a);
	}
	for(int i = 0 ; i < n ; i++)
	{
	    ini.push(ini1.top());
	    ini1.pop();
	}
/*	
	for(int i = 0 ; i < n ; i++)
	{
	    cout << ini.top() << endl;
	    ini.pop();
	}
	*/
	int yy = 0;
	for(int i = 1 ; i <= n ; i++)
	{
	    if(transfer(i) == 0)
	    {
		cout << "no" << endl;
		yy++;
		break;
	    }
	}
	if(yy == 0)
	{
	    cout << "yes" << endl;
	}
	while(!ext.empty())
	{
	    ext.pop();
	}
        while(!ini.empty())
	{
	    ini.pop();
	}
 	while(!fin.empty())
	{
	    fin.pop();
	}

    }
    return 0;
}
