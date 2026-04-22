#include <bits/stdc++.h>

using namespace std;

char grid[105][105];

int L, C, I, px, py, dir;
char movement;
int dirx[4] = {0, 0, -1, 1};  // L, R, U, D
int diry[4] = {-1, 1, 0, 0};

bool can_move() {
    if (px+dirx[dir] < 0 || px+dirx[dir] >= L)
        return false;
    if (py+diry[dir] < 0 || py+diry[dir] >= C)
        return false;
    if (grid[px+dirx[dir]][py+diry[dir]]=='#')
        return false;
    return true;
}

int main() {
    
	while(cin >> L >> C >> I && ( L && C && I)) {
		
		px = py = 0;
		int total =0;
		dir = 1;
		
		cin.ignore();
		
		for (int i=0; i<L; i++) {
			for (int j=0; j<C; j++) {
				cin.get(grid[i][j]);
				if (grid[i][j] == '<') {
					px = i;
					py = j;
				}
			
			}
			cin.ignore();
		}
		
		string command;
		
		getline(cin, command);
		
		for (int i=0; i<command.size(); i++) {
			movement = command[i];
			if (movement == 'L')// L, R, U, D
				dir = 0;
			else if (movement == 'R')
				dir = 1;
			else if (movement == 'U')
				dir = 2;
			else if (movement == 'D')
				dir = 3;
			else{
			    if (can_move()){
			        if (grid[px+dirx[dir]][py+diry[dir]] == '*'){
			            total++;
    			        grid[px+dirx[dir]][py+diry[dir]] = ' ';
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
