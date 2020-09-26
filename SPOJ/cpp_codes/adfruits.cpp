#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007 


void LCS(char *X , char *Y , int m , int n)
{
		int L[m+1][n+1]; 
  
   for (int i=0; i<=m; i++) 
   { 
     for (int j=0; j<=n; j++) 
     { 
       if (i == 0 || j == 0) 
         L[i][j] = 0; 
       else if (X[i-1] == Y[j-1]) 
         L[i][j] = L[i-1][j-1] + 1; 
       else
         L[i][j] = max(L[i-1][j], L[i][j-1]); 
     } 
   } 
  
   int index = L[m][n]; 
 
   char lcs[index+1]; 
   lcs[index] = '\0';
  
   int i = m, j = n; 
   while (i > 0 && j > 0) 
   { 

      if (X[i-1] == Y[j-1]) 
      { 
          lcs[index-1] = X[i-1]; 
          i--; j--; index--;     
      } 
  
      else if (L[i-1][j] > L[i][j-1]) 
         i--; 
      else
         j--; 
   } 


  // cout << lcs << endl;


   char ans[200005];
   i = 0;
   j = 0;
   int l = 0 , k = 0;

   while(i < m or j < n)
   {

   		if(l < L[m][n])
   		{
   		//	cout << 1 << endl;
   		while(i < m and X[i] != lcs[l])
   		{
   			ans[k++] = X[i++];
   			

   		}

   // 		for(int aa = 0 ; aa < k ; aa++)
   // {
   // 	cout << ans[aa];
   // }
   // cout << endl << endl;

   		while(j < n and Y[j] != lcs[l])
   		{
   			ans[k++] = Y[j++];
   			
   		}

   // 		for(int aa = 0 ; aa < k ; aa++)
   // {
   // 	cout << ans[aa];
   // }
   // cout << endl << endl;

   		ans[k++] = lcs[l++];

   // 		for(int aa = 0 ; aa < k ; aa++)
   // {
   // 	cout << ans[aa];
   // }
   // cout << endl << endl << endl;
    		i++;
   			j++;
   		}

   		else
   		{
   			while(i < m)
   		{
   			ans[k++] = X[i++];
   		}

   		while(j < n)
   		{
   			ans[k++] = Y[j++];
   		}
   		}
   }

   for(int aa = 0 ; aa < k ; aa++)
   {
   	cout << ans[aa];
   }
   cout << endl;
}

int main()
{

	#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output1.txt" , "w" , stdout);
	#endif

	char A[100005];
	

	while(scanf("%s",A)!=EOF)
   	{
   		char B[105];
   		long long temp = strlen(A);
   		for(int i = temp - 1 ; i >= 0 ; i--)
   		{
   			B[i] = A[temp - i - 1];
   		}
   		B[temp] = '\0';
   	//	cout << A << " " << B << endl;
   	//	cout << strlen(B) << endl;
     	LCS(A,B,strlen(A),strlen(B));
   	}
	



	return  0;
}