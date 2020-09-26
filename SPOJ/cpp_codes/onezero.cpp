//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool check(long long z)
{
    string str = to_string(z);
    for(int i = 0 ; i < str.size() ; i++)
    {
	if((str.at(i) != '0') && (str.at(i) != '1'))
	    return false;
    }
    return true;
}

int main()
{
    int k;
    scanf("%d" , &k);
    for(int aa = 0 ; aa < k ; aa++)
    {
	int n;
	scanf("%d" , &n);
	string ld;
	int x = n % 10;
	if((x % 2) == 0)
	{
	    ld = "5";
	}
	if(x == 1)
	    ld = "1";
	if(x == 3)
	    ld = "7";
	if(x == 5)
	    ld = "0";
	if(x == 7)
	    ld = "3";
	if(x == 9)
	    ld = "9";
	int f1 = 0 , f2 = 0 , f3 = 0;
	long long finalans;
	long long ans,ans1;
	for(int a = 0 ; a < 10 ; a++)
	{
	    for(int b= 0 ; b < 10 ; b++)
	    {
		for(int c = 0 ; c < 10 ; c++)
		{
		    for(int d = 0 ; d < 10 ; d++)
		    {
			string num = to_string(a) + to_string(b) + to_string(c) + to_string(d) + ld;
			long long no = stoi(num);
			if(no == 0)
			    continue;
			long long temp = no*n;
//			cout << temp << endl;
			if(check(temp))
			{
			    ans = temp;
			    f1 = 1;
			    f2 = 1;
			    f3 = 1;
			    break;
			}    
		    }
		    if(f1 == 1)
			break;
		}
		if(f2 == 1)
		    break;
	    }
	    if(f3 == 1)
		break;
	}
//	cout << endl;
        for(int a = 0 ; a < 10 ; a++)
	{
	    for(int b= 0 ; b < 10 ; b++)
	    {
		for(int c = 0 ; c < 10 ; c++)
		{
		    for(int d = 0 ; d < 10 ; d++)
		    {
			string num = to_string(a) + to_string(b) + to_string(c) + to_string(d) + "0";
			long long no = stoi(num);
			if(no == 0)
			    continue;
			long long temp = no*n;
//			cout << temp << endl;
			if(check(temp))
			{
			    ans1 = temp;
			    f1 = 1;
			    f2 = 1;
			    f3 = 1;
			    break;
			}    
		    }
		    if(f1 == 1)
			break;
		}
		if(f2 == 1)
		    break;
	    }
	    if(f3 == 1)
		break;
	}
        finalans = min(ans , ans1);
//	if(check(102011))
//	{
//	    cout << "true" << endl;
//	}
//	else
//	{
//	    cout << "false" << endl;
//	}
	printf("%lld \n" , finalans);
    }
    return 0;
}
