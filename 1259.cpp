#include <bits/stdc++.h>

using namespace std;

int main()
{   
    int N, temp;
    priority_queue<int> pqimpar;
    priority_queue<int, vector<int>, greater<int>> pqpar;

    cin >> N;
    
    while (N--){
        cin >> temp;
        if (temp % 2==0)
            pqpar.push(temp);
        else 
            pqimpar.push(temp);
    }
    
    while (!pqpar.empty()){
        cout << pqpar.top() << endl;
        pqpar.pop();
    }
    
    while (!pqimpar.empty()){
        cout << pqimpar.top() << endl;
        pqimpar.pop();
    }
    

    return 0;
}
