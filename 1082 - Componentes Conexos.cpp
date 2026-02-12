#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

class UnionFind {
private:
    vi p, setSize;
    int numSets;

public:
    UnionFind(int N) {
        p.assign(N, 0);
        for (int i = 0; i < N; i++) p[i] = i;
        setSize.assign(N, 1);
        numSets = N;
    }

    int findSet(int i) {
        return (p[i] == i) ? i : (p[i] = findSet(p[i]));
    }

    bool isSameSet(int i, int j) {
        return findSet(i) == findSet(j);
    }

    void unionSet(int i, int j) {
        int x = findSet(i);
        int y = findSet(j);

        if (x == y) return;

        // garante que x é o MENOR representante
        if (x > y) swap(x, y);

        // y (maior) vira filho de x (menor)
        p[y] = x;
        setSize[x] += setSize[y];
        numSets--;
    }

    int numDisjointSets() {
        return numSets;
    }
};

int main() {
	int T, V, E;
	cin >> T;

	for (int caso = 1; caso <= T; caso++) {
		cin >> V >> E;
		UnionFind UF(V);

		while (E--) {
			char u, v;
			cin >> u >> v;
			UF.unionSet(u - 'a', v - 'a');
		}

		vector<vector<int>> comp(V);
		for (int i = 0; i < V; i++) {
			comp[UF.findSet(i)].push_back(i);
		}

		cout << "Case #" << caso << ":\n";

		for (int i = 0; i < V; i++) {
			if (!comp[i].empty()) {
				for (int x : comp[i]) {
					cout << char(x + 'a') << ",";
				}
				cout << "\n";
			}
		}

		cout << UF.numDisjointSets() << " connected components\n\n";


	}

	return 0;
}
