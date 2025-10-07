#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, n, m;
    cin >> t;
    
    while(t--){
        cin >> n >> m;
        
        int h, l, sonars;
        
        h = ceil((float) (n-2)/3);
        l = ceil((float) (m-2)/3);
        
        sonars = h*l;
        
        cout << sonars << "\n";
    }
 
    return 0;   
}
