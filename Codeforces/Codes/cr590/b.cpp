//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;
    int arr[k];
    for(int i = 0 ; i < k ; i++)
    {
	arr[i] = -1;
    }
  //  vector<int> lisind;
    int ind = k;
    for(int i = 0 ; i < n ; i++)
    {
	int temp;
	cin >> temp;
	int flag = 0;
	for(int j = 0 ; j < k ; j++)
	{
	    if(arr[j] == temp)
	    {
		flag = 1;
	    }
	}
	if(flag)
	{
	    continue;
	}
	else
	{
	    ind--;
	}
	if(ind == -1)
	{
	    ind = 0;
	    for(int j = k - 2 ; j >= 0 ; j--)
	    {
		arr[j + 1] = arr[j];
	    }
	}
	arr[ind] = temp;
//	cout << arr[0] << " " << arr[1] << endl;
//	lisind.push_back(temp);
    }
    set<int> s1;
    for(int i = 0 ; i < k ; i++)
    {
	if(arr[i] == -1)
	{
	    continue;
	}
	s1.insert(arr[i]);
    }
    cout << s1.size() << endl;
    for(int i = 0 ; i < k ; i++)
    {
	if(arr[i] == -1)
	{

	    continue;
	}
	cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

