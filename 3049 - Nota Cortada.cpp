#include <bits/stdc++.h>

using namespace std;

int main(){
    int T, B, felix, marzia;
    
    cin >> B >> T;
    
    felix = B+T;
    marzia = (160-B)+(160-T);
    
    if ( felix == marzia )
        cout << 0 << endl;
    else if (felix > marzia)
        cout << 1 << endl;
    else 
        cout << 2 << endl;
        
    return 0;
}
