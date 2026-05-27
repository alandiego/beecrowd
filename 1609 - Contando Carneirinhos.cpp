#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int T, N;
    
    cin >> T;
    
    while(T--){
        set<ll> carneiros;
        
        cin >> N;
        
        while (N--){
            int temp;
            cin >> temp;
            carneiros.insert(temp);
        }
        cout << carneiros.size() << endl;
    }
    
    return 0;
}
