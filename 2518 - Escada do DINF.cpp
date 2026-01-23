#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    double N, H, C, L;
    
    while (cin >> N){
        cin >> H >> C >> L;
    
        double hip = sqrt(C*C + H*H);
        double area = (hip*L*N)/10000;
        
        cout << fixed << setprecision(4) << area << '\n';
        
    }
        
    return 0;
}
