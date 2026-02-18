#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tikets[10001];
    int N, M, temp;
    
    while (cin >> N >> M && (N && M)){
        memset(tikets, 0, sizeof(tikets));
        
        for (int i=0; i<M; i++){
            cin >> temp;
            tikets[temp]++;
        }
        
        int fake = 0;
        
        for (int i=1; i<=N; i++){
            if (tikets[i]>=2)
                fake++;
        }
        
        cout << fake << '\n';
    }
    
    return 0;
}
