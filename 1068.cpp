#include <bits/stdc++.h>

using namespace std;

int main()
{
    bool result;
    string expressao;
    while (cin >> expressao){
        stack<char> paranteses;
        result=true;
        for (auto temp : expressao){
            if (temp == '('){
                paranteses.push('(');
            } else if (temp == ')') {
                if (!paranteses.empty()){
                    paranteses.pop();
                } else {
                    result = false;
                    break;
                }
            }
        }
        if (result && paranteses.empty()){
            cout << "correct" << endl;
        } else {
            cout << "incorrect" << endl;
        }
    }
    
    return 0;
}
