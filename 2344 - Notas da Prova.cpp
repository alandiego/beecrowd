#include <bits/stdc++.h>

using namespace std;

int main (){
    int N;
    
    cin >> N;
    
    if (N >= 86)
        cout << "A\n";
    else if (N >= 61)
        cout << "B\n";
    else if (N >=36)    
        cout << "C\n";
    else if (N >= 1)
        cout << "D\n";
    else
        cout << "E\n";
        
    return 0;
}
