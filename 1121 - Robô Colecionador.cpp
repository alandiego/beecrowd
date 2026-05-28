#include <bits/stdc++.h>

using namespace std;

char grid[105][105];

int N, M, S, px, py, dir;
char movement;
int dirx[4] = {0, -1, 0, 1};  // O, N, L, S
int diry[4] = {-1, 0, 1, 0};

bool can_move() {
    if (px+dirx[dir] < 0 || px+dirx[dir] >= N)
        return false;
    if (py+diry[dir] < 0 || py+diry[dir] >= M)
        return false;
    if (grid[px+dirx[dir]][py+diry[dir]]=='#')
        return false;
    return true;
}


void change_dir(char c){
    if (c=='D'){
        dir = (dir+1)%4;
    } else {
        dir = (dir+3)%4;
    }
}

int main() {
    
	while(cin >> N >> M >> S && ( N || M || S)) {
		
		px = py = 0;
		int total =0;
		dir = 1;
		
		cin.ignore();
		
		for (int i=0; i<N; i++) {
			for (int j=0; j<M; j++) {
				cin.get(grid[i][j]);
				if (isalpha(grid[i][j])) {
					px = i;
					py = j;
					// O, N, L, S
					if (grid[i][j]=='O') dir = 0;
					else if (grid[i][j]=='N') dir = 1;
					else if (grid[i][j]=='L') dir = 2;
					else dir = 3;
				}
			
			}
			cin.ignore();
		}
		
		string command;
		
		getline(cin, command);
		
		for (int i=0; i<command.size(); i++) {
		    //‘D’, ‘E’ e ‘F’,
			movement = command[i];
			if (movement != 'F')// L, R, U, D
				change_dir(movement);
			else{
			    if (can_move()){
			        if (grid[px+dirx[dir]][py+diry[dir]] == '*'){
			            total++;
    			        grid[px+dirx[dir]][py+diry[dir]] = '.';
			        }
			        px +=  dirx[dir];
			        py += diry[dir];
			    }
			}
		}
        cout << total << '\n';
        if (cin.peek() == '\n')
            cin.ignore();
	}

	return 0;
}
