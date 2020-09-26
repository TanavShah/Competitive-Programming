//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;
/*
int freq[4];

int retnext(int pos , int inp[])
{
    int retind = INT_MAX;
    int pos1 = 0 , pos2 = 0;
    for(int i = 0 ; i < 4 ; i++)
    {
	if(freq[i] < retind)
	{
	    retind = freq[i];
	    pos1 = i;
	}
    }
    int flag = 0;
    for(int i = pos1 + 1 ; i < 4 ; i++)
    {
	if(freq[i] == retind)
	{
	    pos2 = i;
	    flag = 1;
	}
    }
    if(!flag)
    {
	return pos1;
    }
    for(int i = pos ; i < inp.size() ; i++)
    {
	if(inp[i] == pos2)
	{
	    return pos1;
	}
	else if(inp[i] == pos1)
	{
	    return pos2;
	}
    }

//find min frequency if collison take one that has farhest appearance in inp
}

void insert(int pos , int op[] , int inp[] , int n)
{ 
    if(pos == 0)
    {
        int temp = 0;
	for(int i = 0 ; i < 4 ; i++)
	{
	    if(inp[pos] == temp)
	    {
		temp++;
		continue;
	    }
	    if(freq[temp] == n)
	    {
		temp++;
		continue;
	    }
	    break;
	}
        int outans;
	
	op[pos] = outans;             
	freq[outans]++;
    }
    else
    {
	int temp = 0;
	for(int i = 0 ; i < 4 ; i++)
	{
	    if(op[pos - 1] == temp || inp[pos] == temp)
	    {
		temp++;
		continue;
	    }
	    if(freq[temp] == n)
	    {
		temp++;
		continue;
	    }
	    break;
	}
	op[pos] = temp;
	freq[temp]++;
    }
}

int main()
{
    int n;
    scanf("%d" , &n);
    int size = 2*n;
    int arr[size];
    freq[4] = {0};
    for(int i = 0 ; i < size ; i++)
    {
	char c;
	cin >> c;
	if(c == 'A')
	{
	    arr[i] = 0;
	    freq[0]++;
	}
	else if(c == 'B')
	{
	    arr[i] = 1;
	    freq[1]++;
	}
	else if(c == 'C')
	{
	    arr[i] = 2;
	    freq[2]++;
	}
	else
	{
	    arr[i] = 3;
	    freq[3]++;
	}
    }


    int ans[size];
    for(int i = 0 ; i < size ; i++)
    {
	insert(i , freq , ans , arr , n);
    }

    for(int i = 0 ; i < size ; i++)
    {
	if(ans[i] == 0)
	{
	    cout << "A";
	}
	else if(ans[i] == 1)
	{
	    cout << "B";
	}
	else if(ans[i] == 2)
	{
	    cout << "C";
	}
	else
	{
	    cout << "D";
	}
    }
    cout << endl;
    return 0;
}
*/

int main()
{
    int t;
    scanf("%d" , &t);
	string inp;
	cin >> inp;
    	int len = inp.length();
	char op[len];
	for(int i = 0 ; i < len ; i += 2)
	{
	    if((inp[i] == 'A' && inp[i + 1] == 'B') || (inp[i] == 'B' && inp[i + 1] == 'A'))
	    {
		op[i] = 'C';
		op[i + 1] = 'D';
		if(i == 0)
		{
		    continue;
		}
		else
		{
		    if(op[i - 1] == 'C')
		    {
			op[i] = 'D';
			op[i + 1] = 'C';
		    }
		}
	    }

		    if((inp[i] == 'A' && inp[i + 1] == 'C') || (inp[i] == 'C' && inp[i + 1] == 'A'))
	    {
		op[i] = 'B';
		op[i + 1] = 'D';
		if(i == 0)
		{
		    continue;
		}
		else
		{
		    if(op[i - 1] == 'B')
		    {
			op[i] = 'D';
			op[i + 1] = 'B';
		    }
		}
	    }

	    if((inp[i] == 'A' && inp[i + 1] == 'D') || (inp[i] == 'D' && inp[i + 1] == 'A'))
	    {
		op[i] = 'B';
		op[i + 1] = 'C';
		if(i == 0)
		{
		    continue;
		}
		else
		{
		    if(op[i - 1] == 'B')
		    {
			op[i] = 'C';
			op[i + 1] = 'B';
		    }
		}
	    }


	    if((inp[i] == 'C' && inp[i + 1] == 'B') || (inp[i] == 'B' && inp[i + 1] == 'C'))
	    {
		op[i] = 'A';
		op[i + 1] = 'D';
		if(i == 0)
		{
		    continue;
		}
		else
		{
		    if(op[i - 1] == 'A')
		    {
			op[i] = 'D';
			op[i + 1] = 'A';
		    }
		}
	    }

	    if((inp[i] == 'B' && inp[i + 1] == 'D') || (inp[i] == 'D' && inp[i + 1] == 'B'))
	    {
		op[i] = 'A';
		op[i + 1] = 'C';
		if(i == 0)
		{
		    continue;
		}
		else
		{
		    if(op[i - 1] == 'A')
		    {
			op[i] = 'C';
			op[i + 1] = 'A';
		    }
		}
	    }

	    if((inp[i] == 'C' && inp[i + 1] == 'D') || (inp[i] == 'D' && inp[i + 1] == 'C'))
	    {
		op[i] = 'A';
		op[i + 1] = 'B';
		if(i == 0)
		{
		    continue;
		}
		else
		{
		    if(op[i - 1] == 'A')
		    {
			op[i] = 'B';
			op[i + 1] = 'A';
		    }
		}
	    }
	}
	for(int i = 0 ; i < len ; i++)
	{
	    cout << op[i];
	}
	cout << endl;
    return 0;
}
