#include <bits/stdc++.h>
using namespace std;

typedef tuple<int, int, int> iii;
typedef vector<int> vi;

// UFDS code from ch2/ownlibrary/ufds.cpp
// Union-Find Disjoint Sets Library written in OOP manner, using both path compression and union by rank heuristics
class UnionFind {                                // OOP style
private:
	vi p, rank, setSize;                           // vi p is the key part
	int numSets;
public:
	UnionFind(int N) {
		p.assign(N, 0);
		for (int i = 0; i < N; ++i) p[i] = i;
		rank.assign(N, 0);                           // optional speedup
		setSize.assign(N, 1);                        // optional feature
		numSets = N;                                 // optional feature
	}
	int findSet(int i) {
		return (p[i] == i) ? i : (p[i] = findSet(p[i]));
	}
	bool isSameSet(int i, int j) {
		return findSet(i) == findSet(j);
	}
	void unionSet(int i, int j) {
		if (isSameSet(i, j)) return;                 // i and j are in same set
		int x = findSet(i), y = findSet(j);          // find both rep items
		if (rank[x] > rank[y]) swap(x, y);           // keep x 'shorter' than y
		p[x] = y;                                    // set x under y
		if (rank[x] == rank[y]) ++rank[y];           // optional speedup
		setSize[y] += setSize[x];                    // combine set sizes at y
		--numSets;                                   // a union reduces numSets
	}
	int numDisjointSets() {
		return numSets;
	}
	int sizeOfSet(int i) {
		return setSize[findSet(i)];
	}
};

int main() {

	// Kruskal's algorithm
	int V=0, E;

	cin >> E;

	vector<iii> EL(E);

	for (int i = 0; i < E; ++i) {
		int u, v, w;
		cin >> u >> v >> w;  // read as (u, v, w)
		EL[i] = {w, u, v};                           // reorder as (w, u, v)
	
	    V = max(V, max(u, v));
	}
	
	
	sort(EL.rbegin(), EL.rend());                    // sort by w, O(E log E)
	// note: std::tuple has built-in comparison function

	int mst_cost = 0, num_taken = 0;               // no edge has been taken
	UnionFind UF(V);                               // all V are disjoint sets
	// note: the runtime cost of UFDS is very light
	for (int i = 0; i < E; ++i) {                  // up to O(E)
		auto [w, u, v] = EL[i];                      // C++17 style
		if (UF.isSameSet(u, v)) continue;            // already in the same CC
		mst_cost += w;                               // add w of this edge
		UF.unionSet(u, v);                         // link them
		++num_taken;
		if (num_taken == V-1) break;                 // optimization
	}
	// note: the number of disjoint sets must eventually be 1 for a valid MST
	cout << mst_cost << '\n';
	
	sort(EL.begin(), EL.end());                    // sort by w, O(E log E)
	// note: std::tuple has built-in comparison function

	mst_cost = num_taken = 0;               // no edge has been taken
	UnionFind UF2(V);                               // all V are disjoint sets
	// note: the runtime cost of UFDS is very light
	for (int i = 0; i < E; ++i) {                  // up to O(E)
		auto [w, u, v] = EL[i];                      // C++17 style
		if (UF2.isSameSet(u, v)) continue;            // already in the same CC
		mst_cost += w;                               // add w of this edge
		UF2.unionSet(u, v);                         // link them
		++num_taken;
		if (num_taken == V-1) break;                 // optimization
	}
	// note: the number of disjoint sets must eventually be 1 for a valid MST
	cout << mst_cost << '\n';



	return 0;
}
