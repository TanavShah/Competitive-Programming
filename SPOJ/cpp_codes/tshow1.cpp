//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

string binary(long long z , long long y)
{
	
    string str = "";
    
    int binaryNum[1024];
    int i = 0; 
    while (z > 0) { 
        binaryNum[i] = (z % 2); 
        z = z / 2; 
        i++; 
    }
    for(long long j = y - i ; j > 0 ; j--)
    {
	str += "0";
    }
    for (long long j = i - 1; j >= 0; j--) 
    {
        binaryNum[j] += 48;
        str += binaryNum[j]; 
    }
    return str;
    /*
    for (int i = 31; i >= 0; i--) { 
        int k = n >> i; 
        if (k & 1) 
            str += "1"; 
        else
            str += "0"; 
    }
    char pr[y];
    for(long long i = str.length() - 1 - y ; i >= str.length() - 1 ; i++)
    {
    	pr[i] = str.at(i);
    }
    string ret = pr;
    return ret;    
    */
}

int main()
{
    long long t;
    scanf("%lld" , &t);
    for(long long aa = 0 ; aa < t ; aa++)
    {
	long long x;
	scanf("%lld" , &x);
	string bin;
	if(x == 1)
	{
	    bin = "0";
	}
	else if(x == 2)
	{
	    bin = "1";
	}
	else
	{
	long long n = ceil(log2(x + 2)) - 1;
//	cout << n << endl;
	long long sub = pow(2,n) - 1;
	long long toconvert = x - sub;
	bin = binary(toconvert , n);
	}
//	cout << bin << endl;
	for(long long i = 0 ; i < bin.length() ; i++)
	{
	    if(bin.at(i) == '0')
	    {
		cout << 5;
	    }
	    else
	    {
		cout << 6;
	    }
	}
	cout << endl;
    }
    return 0;
}
