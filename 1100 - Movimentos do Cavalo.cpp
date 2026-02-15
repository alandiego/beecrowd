#include <bits/stdc++.h>

using namespace std;
using ii = pair<int, int> ;

const int INF = 0x3f3f3f3f;

int dx[8] = {-1, -1, 1, 1, -2, -2, 2, 2};
int dy[8] = {2, -2, 2, -2, 1, -1, 1, -1};

int col(char x) {
	return (int) (x-'a');
}

int line(char x) {
	return -(int) (x-'8');
}

bool valid(int x, int y) {
	return x >= 0 && x < 8 && y >= 0 && y < 8;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

	string o, d;

	while(cin >> o >> d) {
	    int board[8][8];

		memset(board, INF, sizeof(board));

		ii s = {line(o[1]), col(o[0])};
		ii goal = {line(d[1]), col(d[0])};

		board[s.first][s.second] = 0;
		queue<ii> q;
		q.push(s);
		while (!q.empty()) {
			ii u = q.front();
			q.pop();
			if (u.first == goal.first && u.second == goal.second) break;
			for (int i=0; i<8; i++ ) {
				if (valid(u.first+dx[i], u.second+dy[i])) {
					if (board[u.first+dx[i]][u.second+dy[i]] != INF) continue;
					board[u.first+dx[i]][u.second+dy[i]] = board[u.first][u.second]+1;
					q.push({u.first+dx[i], u.second+dy[i]});
				}
			}
		}

		cout << "To get from "<< o <<" to " << d << " takes "<< board[goal.first][goal.second]<<" knight moves.\n";

	}

	return 0;
}
