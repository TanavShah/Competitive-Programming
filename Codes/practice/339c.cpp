//		    Su Saheb?      

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

int main()
{
    string s;
    cin >> s;
    int m;
    cin >> m;
    vector<int> num;
    for(int i = 0 ; i < 10 ; i++)
	if(s.at(i) == '1')
	    num.push_back(i+1);

    if(num.size() == 0)
    {
	cout << "NO" << endl;
	return 0;
    }

    int bal = num[0];
    int prev = num[0];
    int n = num.size();
    vector<int> ans;
    ans.push_back(num[0]);

    for(int i = 0 ; i < m - 1 ; i++)
    {
	int flag = 0;
	for(int j = 0 ; j < n ; j++)
	{
	    if(prev != num[j] and bal < num[j])
	    {
		flag = 1;
		ans.push_back(num[j]);
		bal = num[j] - bal;
		prev = num[j];
		break;
	    }
	}

	if(!flag)
	{
	    cout << "NO" << endl;
	    return 0;
	}
    }

    cout << "YES" << endl;
    for(int i = 0 ; i < m ; i++)
    {
	cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}

