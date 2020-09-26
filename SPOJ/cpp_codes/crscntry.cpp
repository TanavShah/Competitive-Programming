//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int lcs(vector<int> a , vector<int> b , int as , int bs)
{
    int L[as + 1][bs + 1];
    for(int i = 0 ; i <= as ; i++)
    {
	for(int j = 0 ; j <= bs ; j++)
	{
	    if((i == 0) || (j == 0))
	    {
		L[i][j] = 0;
	    }
	    else if(a[i - 1] == b[j - 1])
	    {
		L[i][j] = L[i - 1][j - 1] + 1;
	    }
	    else
	    {
		L[i][j] = max(L[i - 1][j] , L[i][j - 1]);
	    }
	}
    }
    return L[as][bs];
}

int main()
{
    int d;
    scanf("%d" , &d);
    for(int aa = 0 ; aa < d ; aa++)
    {
	vector <int> main;
	for(int i = 0 ; ; i++)
	{
	    int x;
	    scanf("%d" , &x);
	    if(x == 0)
	    {
		break;
	    }
	    main.push_back(x);
	}
	int mainsize = main.size();
	vector<int> ans;
	for(int pp = 0 ; ; pp++)
	{
	    vector<int> tom;
	    int p;
	    scanf("%d" , &p);
	    if(p == 0)
	    {
		break;
	    }
	    tom.push_back(p);
	    for(int i = 0 ; ; i++)
	    {
		int y;
		scanf("%d" , &y);
		if(y == 0)
		{
		    break;
		}
		tom.push_back(y);
	    }
	    int tomsize = tom.size();
	    int thisans = lcs(main , tom , mainsize , tomsize);
	    ans.push_back(thisans);
	}
	int finalans = ans[0];
	for(int i = 1 ; i < ans.size() ; i++)
	{
	    if(ans[i] > finalans)
	    {
		finalans = ans[i];
	    }
	}
	printf("%d \n" , finalans);
    }
    return 0;
}
