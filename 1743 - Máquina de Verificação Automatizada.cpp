#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int X[5];
    int Y[5];
    string ans = "Y";
    
    for (int i=0; i<5; i++){
        cin >> X[i];
    }
    for (int i=0; i<5; i++){
        cin >> Y[i];
    }
    for (int i=0; i<5; i++){
        if (X[i]+Y[i]!=1){
            ans = "N";
            break;
        }
    }
    
    cout << ans << '\n';
    return 0;
}
