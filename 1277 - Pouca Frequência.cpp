#include <bits/stdc++.h>

using namespace std;

int main (){
    int T, N;
    
    cin >> T;
    
    while (T--){
        
        cin >> N;
        
        vector<pair<string, double>> aluno(N);
        
        for (int i=0; i<N; i++){
            cin >> aluno[i].first;
        }
        
        string temp;
        
        for (int i=0; i<N; i++){
            cin >> temp;
            int p=0, m=0;
            for (int j=0; j<temp.size(); j++){
                if (temp[j]=='P')
                    p++;
                if (temp[j]=='M')
                    m++;
            }
            aluno[i].second = (double) p / (temp.size()-m);
            //cout << p << endl;
        } 
        
        bool primeiro = true;
        for (int i=0; i<N; i++){
            if (aluno[i].second < 0.75){
                if (!primeiro)
                    cout << " ";
                cout << aluno[i].first;
                primeiro = false;
            }
        }
        cout << '\n';
    }
    
    return 0;
}
