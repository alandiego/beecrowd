#include <bits/stdc++.h>
using namespace std;

#define MAX_AUTHORS 101
#define INF         0x3f3f3f3f

vector<string> authors;
int graph[MAX_AUTHORS][MAX_AUTHORS];
int nauthors;

vector<pair<string, string>> ans;
vector<int> dist;

int find_index(string name){
    auto it = find(authors.begin(), authors.end(), name);
    return (it == authors.end()) ? -1 : it - authors.begin();
}

void bfs(int s){
    queue<int> q;
    q.push(s);
    dist[s] = 0;

    while (!q.empty()) {
        int u = q.front(); q.pop();
        for (int v = 0; v < nauthors; ++v) {
            if (graph[u][v] && dist[v] == INF) {
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int A, TC = 0;
    string line;

    while (cin >> A && A) {
        cin.ignore(); // descarta \n

        memset(graph, 0, sizeof(graph));
        authors.clear();
        ans.clear();

        for (int a = 0; a < A; ++a) {
            getline(cin, line);
            if (line.back() == '.') line.pop_back(); // remove o ponto final
            stringstream ss(line);
            string token;
            vector<int> paper_index;

            while (getline(ss, token, ',')) {
                stringstream sa(token);
                string fname, lname;
                sa >> fname >> lname;

                string full = fname + " " + lname;
                full.erase(remove(full.begin(), full.end(), '.'), full.end());

                string key = fname + " " + lname;
                if (find_index(key) == -1) {
                    authors.push_back(key);
                    ans.push_back({lname, fname});
                }
                paper_index.push_back(find_index(key));
            }

            for (int i = 0; i < paper_index.size(); ++i)
                for (int j = 0; j < paper_index.size(); ++j)
                    if (i != j)
                        graph[paper_index[i]][paper_index[j]] = 1;
        }

        nauthors = authors.size();
        dist.assign(nauthors, INF);

        int s = find_index("P. Erdos");
        if (s != -1) bfs(s);

        sort(ans.begin(), ans.end(), [](const pair<string, string>& a, const pair<string, string>& b) {
            if (a.first != b.first) return a.first < b.first;
            return a.second < b.second;
        });

        cout << "Teste " << ++TC << "\n";
        for (auto a : ans) {
            string full_name = a.second + " " + a.first;
            if (full_name != "P. Erdos") {
                int idx = find_index(full_name);
                string result = (dist[idx] == INF) ? "infinito" : to_string(dist[idx]);
                cout << full_name << ": " << result << "\n";
            }
        }
        cout << "\n";
    }

    return 0;
}
