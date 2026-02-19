#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

    int N;
    
    while (cin >> N && N){
        char ans[4] = {'N', 'O', 'S', 'L'};
        int index=0;
        char x;
        for (int i=0; i<N; i++){
            cin >> x;
            if (x=='D')
                index = (index+4-1) % 4; // to left or back to n-1
            else
                index = (index+1) % 4; // to right or back to 0
            
        }
        cout << ans[index] << "\n";
    }
    
    return 0;
}
