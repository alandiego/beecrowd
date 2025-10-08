#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N, K, feedback;
    vector<string> staff = {"", "Rolien", "Naej", "Elehcim", "Odranoel" } ;

    cin >> N;
    
    while (N--){
        cin >> K;
        while (K--){
            cin >> feedback;
            cout << staff[feedback] << "\n";
        }
    }
 
    return 0;   
}
