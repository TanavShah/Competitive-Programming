//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int search(vector<string> v , string s)
{
    for(int i = 0 ; i < v.size() ; i++)
    {
	if(v[i] == s)
	{
	    return i;
	}
    }
    return -1;
}

int findhash(string s)
{
    int ans = 0;
    for(int i = 0 ; i < s.length() ; i++)
    {
	ans = (ans + ((int)s.at(i)*(i + 1))) % 101;
    }
    ans = (ans*19) % 101;
    return ans;
}

int main()
{
    int t;
    scanf("%d" , &t);
    while(t--)
    {
	int n1;
	scanf("%d" , &n1);
	vector<string> memory;
	string arr[101];
	int hash[101] = {0};
	int flag = 0;
	while(n1--)
	{
	    string temp;
	    cin >> temp;
	    if(temp.at(0) == 'A')
	    {
		if(temp.length() == 4)
		{
		    temp = "";
		}
		else
		{
		    temp = temp.substr(4 , temp.length());
		}
		if(search(memory , temp) != -1)
		{
		    continue;
		}
		else
		{
		    memory.push_back(temp);
		    int pos = findhash(temp);
		    int ori = pos;
			for(int i = 0 ; i <= 19 ; i++)
			{
                            pos = (ori + i*i + 23*i) % 101;     
			    if(hash[pos] == 0)
			    {
				arr[pos] = temp;
				hash[pos] = 1;
				break;
			    }
			}
		}
	    }
	    else
	    {
                if(temp.length() == 4)
		{
		    temp = "";
		}
		else
		{
		    temp = temp.substr(4 , temp.length());
		}  
		int delpos = (search(memory , temp));
		if(delpos == -1)
		{
		    continue;
		}
		else
		{
		    memory.erase(memory.begin() + delpos);
		}
		for(int i = 0 ; i < 101 ; i++)
		{
		    if(arr[i] == temp)
		    {
			arr[i] = "";
			hash[i] = 0;
			break;
		    }
		}

	    }
	}
	
	int cnt = 0;
	for(int i = 0 ; i < 101 ; i++)
	{
	    if(arr[i] == "")
	    {
		hash[i] = 0;
	    }
	}
	for(int i = 0 ; i < 101 ; i++)
	{
	    if((hash[i] == 1))
	    {
		cnt++;
	    }
	}
	printf("%d\n" , cnt);
	for(int i = 0 ; i < 101 ; i++)
	{
	    if(hash[i] == 1)
	    {
		cout << i << ":" << arr[i] << endl;
	    }
	}

    }
    return 0;
}

