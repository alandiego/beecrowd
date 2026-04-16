#include<bits/stdc++.h>
using namespace std;

int main(){
    int A1, B1, A2, B2, A, B;
    
    cin >> A1 >> B1 >> A2 >> B2 >> A >> B;
    
    // lado a lado formando A x B
    if (A1 + A2 >= A && min(B1, B2) >= B)
        cout << "S\n";
    else if (A1 + B2 >= A && min(B1, A2) >= B)
        cout << "S\n";
    else if (B1 + A2 >= A && min(A1, B2) >= B)
        cout << "S\n";
    else if (B1 + B2 >= A && min(A1, A2) >= B)
        cout << "S\n";

    // lado a lado formando B x A (lençol rotacionado)
    else if (A1 + A2 >= B && min(B1, B2) >= A)
        cout << "S\n";
    else if (A1 + B2 >= B && min(B1, A2) >= A)
        cout << "S\n";
    else if (B1 + A2 >= B && min(A1, B2) >= A)
        cout << "S\n";
    else if (B1 + B2 >= B && min(A1, A2) >= A)
        cout << "S\n";

    // usar apenas um tecido
    else if (A1 >= A && B1 >= B)
        cout << "S\n";
    else if (A2 >= A && B2 >= B)
        cout << "S\n";
    else if (A1 >= B && B1 >= A)
        cout << "S\n";
    else if (A2 >= B && B2 >= A)
        cout << "S\n";
    else 
        cout << "N\n";
    
    return 0;
}
