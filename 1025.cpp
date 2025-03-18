#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

int teste = 1; //contador caso de teste
int N; //numero de marmores
int Q; //numero de consultas
vector<int> marmores; //sequencia de marmores
int busca;;

int main()
{
    do {
        
        cin >> N >> Q;
        
        if (N==0){
            break;
        }
        
        marmores.assign(N, 0);
        
        for (int i=0; i<N; i++){
            cin >> marmores[i];
        }
        
        cout << "CASE# " << teste << ":\n";
        
        sort(marmores.begin(), marmores.end());
        
        for (int i=0; i<Q; i++){
            cin >> busca;
            
            vector<int>::iterator it = find(marmores.begin(), marmores.end(), busca);
            
            
            if (it != marmores.end()){
                cout << busca << " found at " << it - marmores.begin()+1 << "\n";
            } else {
                cout << busca << " not found\n";
            }
        }
        teste++;
        
    } while (1);
    

    return 0;
}
