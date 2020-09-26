#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int min(int w1, int w2)
{
    if(w1 >= w2)
    {
		return w2;
    }
    if(w1 <= w2)
	{
	    return w1;
	}
}

int main()
{
    int t;
    cin >> t;
    
    for (int aa = 0; aa < t ; aa++)
    {
    int y,z;
    y = 0;
    z = 0;
    int e,f;
    e = 0;
    f = 0;	
	int a,b,c;
	cin >> a >> b >> c;
	int x = 0;
	if(c==0)
	{
	    cout << 1 << endl;
	    continue;
	    x++;
	    
	    
	}
	else
	{
	int p;
	if(a>b)
	{
	    int n = a/b;
	    int s[n];
	    for(int i = 0 ;i < n ; i++)
	    {
		s[i]  = (b*(i+1));
	    }	
	    if(c == b)
		{
		    cout << 1 << endl;
		    continue;
		    x++;
		 }

	for(int i = 0 ;; i++)
	{
	    int q = a - (i*b);
	    if(q <= 0)
	    {
		p = i;
		break;		
	    }
	}
	if(c == (b*(p)-a))
	{
	    cout << 2*(p) << endl;
	    continue;
	    x++;
	}
	int r[p];
	for(int i = 0; i < p ; i++)
	{
	    r[i] = a - (i*b);
	}
	if(c == a)
	{
	    cout << 1 << endl;
	    continue;

x++;
	    
	}
	if(c == b)
		{
		    cout << 1 << endl;
		continue;    
x++;
		    
		}
		for(int i = 1;i<n;i++)
		{
		    if(s[i] == c)
		    {
			z = 1;
			f = i;
		    }
		}
		for(int i = 0 ; i<p;i++)
		{
		    if(r[i] == c)
		    {
			y = 1;
			e = i;
		    }
		}
		if((z==1) && (y!=1))   
		{
		    cout << (2*(f+1))  << endl;
		   continue; 
x++;
		    
		}
		

	
	    if((z!=1) && (y==1))
	    {
		cout << (2*e) << endl;
		continue;
x++;
		
	    }
	    
	    if((z == 1) && (y == 1))
		{
		    cout << min((2*e),(2*(f+1))) << endl;
		    continue;
x++;
		}
	    
	}
	if(b>a)
	{
            int n = b/a;
	    int s[n];
	    for(int i = 0 ;i < n ; i++)
	    {
		s[i]  = (a*(i+1));
	    }	
	    if(c == a)
		{
		    cout << 1 << endl;
		    continue;
x++;
		    
		}

	for(int i = 0 ;; i++)
	{
	    int q = b - (i*a);
	    if(q <= 0)
	    {
		p = i;
		break;
	    }
	}
	if(c == (a*(p)-b))
	{
	    cout << 2*(p) << endl;
	    continue;
	    x++;
	}
	int r[p];
	for(int i = 0; i < p ; i++)
	{
	    r[i] = b - (i*a);
	}
	if(c == b)
	{
	    cout << 1 << endl;
	    continue;
x++;
	    
	}
	if(c == a)
		{
		    cout << 1 << endl;
		    continue;
x++;
		    
		}
		for(int i = 1;i<n;i++)
		{
		    if(s[i] == c)
		    {
			z = 1;
			f = i;
		    }
		}
		for(int i = 0 ; i<p;i++)
		{
		    if(r[i] == c)
		    {
			y = 1;
			e = i;
		    }
		}
		if((z==1) && (y!=1))   
		{
		    cout << (2*(f+1))  << endl;
		    continue;
x++;
		    
		}
		

	
	    if((z!=1) && (y==1))
	    {
		cout << (2*e) << endl;
		continue;
x++;
		
	    }
	    
	    if((z == 1) && (y == 1))
		{
		    cout << min((2*e),(2*(f+1))) << endl;
		    continue;
x++;
		}
	    
	}
      	        
	
	if(a==b)
	{
	    if(c==a)
	    {
		cout << 1 << endl;
		continue;
x++;
		
	    }
	    if(c==0)
	    {
		cout << 1 << endl;
		continue;
x++;

	    }
	}

	
	if(x==0)
	{
	    cout << -1 << endl;
	    continue;

	}
    }
}
  

}
