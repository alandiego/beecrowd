#include <bits/stdc++.h>

using namespace std;


int main(){
    int T;
    
    cin >> T;
    
    cin.ignore();
    
    while(T--){
        string A;
        getline(cin, A);
        
        stack<char> balance;
        bool ok=true;
        
        for (auto &a : A){
            if (a == '{' || a == '[' || a == '('){
                balance.push(a);
            } else {
                if (balance.empty()){
                    ok = false; 
                    break;
                }
                
                char x = balance.top();
                balance.pop();
                
                if (x == '{' && a != '}'){
                    ok = false;
                    break;
                } else if (x == '[' && a != ']'){
                    ok = false;
                    break;
                } else if (x == '(' && a != ')'){
                    ok = false; 
                    break;
                }
            }
        }
        
        if (balance.size()!=0)
            cout << 'N' << endl;
        else
            cout << (ok ? 'S': 'N') << endl;
    }
    
    return 0;
}
