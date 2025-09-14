#include <bits/stdc++.h>
using namespace std;

int N, M, temp;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    while (cin >> N >> M && (N && M) ) {
        vector<int> numbers;
        
        cout << N << " " << M << "\n";
        
        for (int i=0; i<N; i++){
            cin >> temp;
            numbers.push_back(temp);
        }
        
        sort(numbers.begin(), numbers.end(), [](const int& a, const int& b){
            if (a%M == b%M){
                if (a%2 != 0 && b%2 != 0){
                    return a > b;
                } else if (a%2 == 0 && b%2 == 0) {
                    return b > a;
                } else {
                    return (a%2 != 0) ? true : false;
                }
            }
            return a%M < b%M;
        });
        
        for (auto &i : numbers){
            cout << i << "\n";
        }
        
    }

    cout << "0 0\n";
    
    
    return 0;
}
