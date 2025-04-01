#include <bits/stdc++.h>

using namespace std;

int main()
{
   
   
    int N;
   
    while (cin >> N && N != 0){
        deque<int> baralho;
        queue<int> descarte;
        //inicio base fim topo
        for (int i=1; i<=N; i++)
            baralho.push_front(i);
        
        while (baralho.size() >=2){
            descarte.push(baralho.back());
            baralho.pop_back();
            baralho.push_front(baralho.back());
            baralho.pop_back();
        }
        
        cout << "Discarded cards:";
        while (descarte.size() > 1){
            cout << " " << descarte.front() << ",";
            descarte.pop();
        }
        cout << " " << descarte.front() << endl;
        cout << "Remaining card: " << baralho.front() << endl;
    }
    
    return 0;
}


