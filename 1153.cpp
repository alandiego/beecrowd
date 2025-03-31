#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    long long int resp = 1;
    
    cin >> N;
    
    for (;N>1;N--)
        resp *= N;
        
    cout << resp << endl;
    
    return 0;
}
