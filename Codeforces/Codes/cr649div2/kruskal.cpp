vector<int> parent, rank;

void make_set(int v)
{
	parent[v] = v;
	rank[v] = 0;
}

int find_set(int v)
{
	if(v == parent[v])
		return v;
	return parent[v] = find_set(parent[v]);
}

void union_set(int a, int b)
{
	a = find_set(a);
	b = find_set(b);

	if(a != b)
	{
		if(rank[a] < rank[b])
			swap(a, b);

		parent[b] = a;

		if(rank[a] == rank[b])
			rank[a]++;
	}
}

struct E
{
	int u, v, weight;
	bool operator<E const& other>
	{
		return weight < other.weight;
	}
}

sort(edge.begin(), edge.end());

for(auto e : edge)
{
	if(find_set(e.u) != find_set(e.v))
	{
		cost += e.weight;
		ans.push_back(e);
		union_set(e.u, e.v);
	}
}