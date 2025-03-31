#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    int T, V;
    long long resp = 0;
    
    cin >> N;
    
    while (N--){
        cin >> T >> V;
        resp += T*V;
    }
    
    cout << resp << endl;
    
    return 0;
}
