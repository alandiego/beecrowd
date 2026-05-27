#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    
    while (cin >> N){
        double ans = 0, v;
        for (int i=0; i<N; i++){
            cin >> v;
            ans +=v;
        }
        if (ans >= (2*N)/3.0)
            cout << "impeachment\n";
        else
            cout << "acusacao arquivada\n";
    }

    return 0;
}
