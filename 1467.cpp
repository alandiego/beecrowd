#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    
    while (cin >> a >> b >> c){
        if (a == b && a == c){
            cout << "*\n";
        } else if (a==b) {
            cout << "C\n";;
        } else if (c==b) {
            cout << "A\n";
        } else {
             cout << "B\n";
        }
        
    }
    
    return 0;
}
