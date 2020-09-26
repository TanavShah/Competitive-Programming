#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool isPrime(long n) 
{  
    if (n <= 1) 
        return false; 
    for (long i = 2; i <= sqrt(n); i++) 
        if (n % i == 0) 
            return false; 

    return true; 
} 


long phi(long a)
{
    long ans = a;
    if(isPrime(a))
    {
	return a-1;
    }
    else
    {
    for(long i = 0 ; i < a ; i++)
    {
	if((isPrime(i)) && ((a % i) == 0))
	{  
	    ans = ans - (ans/i);
	}
    }
    }
    return ans;
}

int main()
{
    long t;
    cin >> t;
    for(int aa = 0; aa < t;aa++)
    {
	long n;
	cin >> n;
	cout << phi(n) << endl;
//	cout << isPrime(n) << endl;

    }
}
