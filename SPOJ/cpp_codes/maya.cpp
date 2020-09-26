//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    while(1)
    {
	int n;
	cin >> n;
	cin.ignore(1000,'\n');
//	cout << "ksdnk" << endl;
	if(n == 0)
	{
	    break;
	}
//	cout << n << endl;
	long long arr[n] = {0};
	for(long long i = 0 ; i < n ; i++)
	{
	    string str;
	    getline(cin , str);
//	    cout << str << endl;
	    for(int j = 0 ; j < str.length() ; j++)
	    {
//		if(str.at(i) == '\0')
//		{
//		    break;
//		}
//		if(str.at(i) == 'S')
//		{
//		    break;
//		}
		if(str.at(i) == '.')
		{
		    arr[i] += 1;
		}
		if(str.at(i) == '-')
		{
		    arr[i] += 5;
		}
	    }
	    /*
	    for(int j = 0 ; j < 10 ; j++)
	    {
		char temp;
		cin >> temp;
		cout << temp;
		if(temp == ' ')
		{
		    continue;
		}
		if(temp == 'S')
		{
		    break;
		}
		if(temp == '\n')
		{
		    break;
		}
		if(temp == '.')
		{
		    arr[i] += 1;
		}
		else if(temp == '-')
		{
		    arr[i] += 5;
		}
	    }
	    cout << endl;
	    */
	}
	for(int i = 0 ; i < n ; i++)
	{
	    cout << arr[i] << " ";
	}
	cout << endl;
	long long ans = 0;
	long long cur = 1;
	for(int i = n - 1 ; i >= 0 ; i--)
	{
            ans += (cur*arr[i]);      
	    if(i != 2)
	    {
		cur *= 20;
	    }
	    else
	    {
		cur *= 18;
	    }
	   
	}
	printf("%lld \n" , ans);

//	cin >> n;
//	cin.ignore(1000,'\n');
//	char x;
//	cin >> x;
//	cout << endl;
    }
    return 0;
}

