// C++ implementation of the approach 
#include <bits/stdc++.h> 
using namespace std; 
#define N 2005 

// To store vertices, edges 
// and the required answer 
int n, m, ans; 

// To store parent and rank 
int par[N], Rank[N]; 

// To store edges and the edges in MST 
vector<pair<int, pair<int, int> > > edges, mst; 

// To store the edges with weight zero 
queue<pair<int, int> > zeros; 

// Function for initialize 
void initialize() 
{ 
	for (int i = 0; i <= n; i++) { 
		par[i] = i; 
		Rank[i] = 0; 
	} 
} 

// Function to add edges 
void Add_edge(int u, int v, int weight) 
{ 
	edges.push_back({ weight, { u, v } }); 
} 

// Utility function to find set of an element i 
// (uses path compression technique) 
int find(int x) 
{ 
	if (par[x] != x) 
		par[x] = find(par[x]); 

	return par[x]; 
} 

// Function that performs union of two sets x and y 
// (uses union by rank) 
void Union(int x, int y) 
{ 
	int xroot = find(x); 
	int yroot = find(y); 

	if (Rank[xroot] < Rank[yroot]) 
		par[xroot] = yroot; 
	else if (Rank[xroot] > Rank[yroot]) 
		par[yroot] = xroot; 
	else { 
		par[yroot] = xroot; 
		Rank[xroot]++; 
	} 
} 

// Function to compute minimum spanning tree 
void compute_MST() 
{ 
	// Sort edges in increasing order of weight 
	sort(edges.begin(), edges.end()); 

	// Go through all the edges 
	for (int i = 0; i < m; i++) { 
		int u = find(edges[i].second.first); 
		int v = find(edges[i].second.second); 

		if (u == v) 
			continue; 

		// Build minimum spanning tree 
		// and store minimum cost 
		mst.push_back(edges[i]); 
		ans += edges[i].first; 
		Union(u, v); 
	} 
} 

// Function to find the cost of minimum 
// spanning tree 
void Modified_Kruskal(pair<int, int> x) 
{ 
	initialize(); 

	// Make answer zero 
	ans = 0; 
	int sz = zeros.size(); 

	// Keep the edges which only have zero weights 
	// and remove all the other edges 
	for (int i = 0; i < sz; i++) { 
		pair<int, int> Front = zeros.front(); 
		zeros.pop(); 

		if (Front.first == x.first 
			and Front.second == x.second) 
			continue; 

		// Make union between the vertices of 
		// edges which have weight zero and keep 
		// them in queue 
		Union(Front.first, Front.second); 
		zeros.push(Front); 
	} 

	// Find the cost of the minimum spanning tree 
	for (int i = 0; i < mst.size(); i++) { 
		int u = find(mst[i].second.first); 
		int v = find(mst[i].second.second); 

		if (u == v) 
			continue; 

		ans += mst[i].first; 
		Union(u, v); 
	} 
} 

// Function to handle different queries 
void query(int type, int u = 0, int v = 0) 
{ 

	// Update edge weight to 0 
	if (type == 2) { 
		// push edge in zeros 
		zeros.push({ u, v }); 
		Modified_Kruskal({ -1, -1 }); 
	} 

	// Restore edge weight to original value 
	else if (type == 3) { 
		// push edge in zeros 
		zeros.push({ u, v }); 
		Modified_Kruskal({ u, v }); 
	} 
	else
		cout << ans << endl; 
} 

// Driver code 
int main() 
{ 

	#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt" , "w" , stdout);
	#endif

	// Number of nodes and edges 
	//int n,m;
	int z;
	cin >> n >> z;
	m = ((n)*(n - 1))/2;
	initialize(); 

	// for(int i = 1 ; i < n ; i++)
	// {
	// 	for(int j = i ; j <= n ; j++)
	// 	{
	// 		Add_edge(i , j , 0);
	// 	}
	// }

	for(int i = 0 ; i < z ; i++)
	{
		int x,y;
		cin >> x >> y;
		Add_edge(x , y , 1);
	}
for(int i = 1 ; i < n ; i++)
	{
		for(int j = i ; j <= n ; j++)
		{
			Add_edge(i , j , 0);
		}
	}

	//n = 4, m = 4; 
	

	// Add edges 
	// Add_edge(1, 2, 1); 
	// Add_edge(2, 3, 1); 
	// Add_edge(3, 4, 1); 
	// Add_edge(4, 1, 1); 

	// Build the minimum spanning tree 
	compute_MST(); 

	// Execute queries 
	//query(2, 1, 2); 
	query(1); 
	// query(3, 1, 2); 
	// query(1); 

	return 0; 
} 
