//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d" , &n);
    int paa = 0,addho = 0,pono = 0;
    string inp[n];
    for(int i = 0 ; i < n ; i++)
    {
	cin >> inp[i];
    }
    for(int i = 0 ; i < n ; i++)
    {
	if((inp[i].at(0) == '1') && (inp[i].at(2) == '2'))
	{
	    addho++;
	}
        if((inp[i].at(0) == '1') && (inp[i].at(2) == '4'))
	{
	    paa++;
	}
       	if((inp[i].at(0) == '3') && (inp[i].at(2) == '4'))
	{
	    pono++;
	}
    }	
//    cout << addho << " " << paa << " " << pono << endl;
    int c = 1;
    if(paa >= pono)
    {
	c += pono;
	paa = paa - pono;
	pono = 0;
    }
    if(paa < pono)
    {
	c += paa;
	pono = pono - paa;
	paa = 0;
    }//cout << addho << " " << paa << " " << pono << endl;
//ahaia jovo
    if(paa >= (2*addho))
    {
	c += addho;
	paa = paa - (addho*2);
	addho = 0;
    }
    if(paa < (2*addho))
    {
	c += (paa/2);
	addho = addho - (paa/2);
	if((paa % 2) == 0)
	{
	    paa = 0;
	}
	else
	{
	    paa = 1;
	}
    }//cout << addho << " " << paa << " " << pono << endl;
    if(paa >= (2*addho))
    {
	c += addho;
	paa = paa - (addho*2);
	addho = 0;
    }
    if(paa < (2*addho))
    {
	c += (paa/2);
	addho = addho - (paa/2);
	if((paa % 2) == 0)
	{
	    paa = 0;
	}
	else
	{
	    paa = 1;
	}
    }   
    if(paa > 0)
    {
	c += (paa/4);
	paa = (paa % 4);
    }
    if(paa > 0)
    {
	c += 1;
	paa = 0;
    }//cout << addho << " " << paa << " " << pono << endl;

    if(addho > 0)
    {
	c += (addho/2);
	addho = (addho % 2);
    }
    if(addho > 0)
    {
	c += 1;
	addho = 0;
    }//cout << addho << " " << paa << " " << pono << endl;

    if(pono > 0)
    {
	c += pono;
	pono = 0;
    }//cout << addho << " " << paa << " " << pono << endl;

     cout << c << endl; 
    return 0;
}
