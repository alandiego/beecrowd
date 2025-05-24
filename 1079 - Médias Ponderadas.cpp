#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N;
    
    cin >> N;
    
    while (N--){
        double v1, v2, v3, result;
        
        cin >> v1 >> v2 >> v3;
        
        result = ((v1*2)+ (v2*3) + (v3*5))/10.0;
        
        cout << fixed << setprecision(1) <<result <<'\n';
    }
        
        
    return 0;
}
