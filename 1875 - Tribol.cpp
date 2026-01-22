#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    
    int C, P;
    
    cin >> C;
    
    while (C--){
        cin >> P;
        
        int R=0, B=0, G=0; 
        pair<char, char> gol;
        
        while (P--){
            cin >> gol.first >> gol.second;
            
            if (gol == (pair<char,char>){'R', 'B'})
                R+=1;
            else if (gol == (pair<char,char>){'B', 'G'})
                B+=1;
            else if (gol == (pair<char,char>){'G', 'R'})
                G+=1;
            else if (gol == (pair<char,char>){'R', 'G'})
                R+=2;
            else if (gol == (pair<char,char>){'G', 'B'})
                G+=2;
            else
                B+=2;
        }
        
        if (R == B && B == G)
            cout << "trempate\n";
        else if (max(B, G)==R || max(B, R) == G ||  max(R, G)== B)
            cout << "empate\n";
        else if (max(B, G) < R)
            cout << "red\n";
        else if (max(R, G) < B)
            cout << "blue\n";
        else 
            cout << "green\n";
        
    }
    return 0;
}
