#include <bits/stdc++.h>

using namespace std;

int main()
{
    int TC, N;
    cin >> TC;
    while (TC--){
        cin >> N;
        if (N%2==0)
            cout << 0 << endl;
        else 
            cout << 1 << endl;
    }

    return 0;
}
