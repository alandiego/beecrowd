#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N, B;
    
    while (cin >> N >> B && N && B){
        vector<bool> ball;
        ball.assign(N+1, false);
        
        for (int i=0; i< B; i++){
            int temp;
            cin >> temp;
            ball[temp]=true;
        }
        
        int cont=0;
        for (int i=0; i <= N; i++){
            for (int j=0; j<=N-i; j++){
                if (ball[j] && ball[j+i]){
                    cont++;
                    break;
                }
            }
        }
        
        string ans = (cont == N+1) ? "Y" : "N";
        cout << ans <<"\n";
    }

    return 0;
}
