#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
   int cidadeN =1, N;
   
   int TotalPessoas, p;
   double TotalLitros, l, ConsumoMedio;
   vector<int> consumo;
   bool first;
   
    do {
        
        TotalLitros =0;
        TotalPessoas =0;
        
        cin >> N;
        
        if (N == 0){
            break;
        }
        
        consumo.assign(201,0);
        
        for (int i=0; i<N; i++){
            cin >> p >> l;
            TotalLitros += l;
            TotalPessoas +=p;
            
            consumo[l/p] += p;
        }
        
        first = true;
        
        printf("Cidade# %d:\n", cidadeN);
        
        for (int i=0; i<201; i++){
            if (consumo[i]>0){
                if (first)
                    first = false;
                else
                    cout << ' ';
                cout << consumo[i] << '-' << i;
            }
            
        }
        
        printf("\n");
        
        
        ConsumoMedio = floor((100.0 *TotalLitros) / TotalPessoas) / 100.0;
        printf("Consumo medio: %.2lf m3.\n", ConsumoMedio);
        
        if (N > 0){
            printf("\n");
        }
        
        
        cidadeN++;
    } while (N);
   
   return 0;
}
