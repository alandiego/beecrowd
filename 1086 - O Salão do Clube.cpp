#include <bits/stdc++.h>

using namespace std;

int qtd_tabuas(int linhas, int alvo, vector<int> &tabuas){
    int total=0;
    int i=0, j = tabuas.size()-1;
    int linhas_atendidas=0;
    
    auto lb = lower_bound(tabuas.begin(), tabuas.end(), alvo);
    
    //quantidades de linhas com exatamente uma tabua
    while (lb != tabuas.end() && *lb==alvo && total<linhas){
        total++; 
        lb++;
    }
    
    linhas_atendidas=total;

    //resolvendo linhas com duas tabuas
    while (i<j && linhas_atendidas<linhas ){
        if (tabuas[i]+tabuas[j]>alvo){
            j--;
        } else if (tabuas[i]+tabuas[j]<alvo) {
            i++;
        } else {
            j--;
            i++;
            linhas_atendidas++;
            total+=2;
        }
    }
    
    if (linhas!=linhas_atendidas)
        return 0; //nao conseeguiu completar todas as linhas
    else
        return total;
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    
    int M, N, L, K, linhas;	
    int resultM, resultN;
	
	int temp;
	
	while (cin >> M >> N && M && N){
	    
	    cin >> L >> K;
	    
	    vector<int> tabuas(K);
	    
	    for (int i=0; i< K; i++){
	        cin >> tabuas[i];
	    }
	    
	    sort(tabuas.begin(), tabuas.end());
	    resultM=0; resultN=0;
	    
	    // Tentar no primeiro sentido
        if ((M * 100) % L == 0){
            linhas = (M * 100) / L;
            resultM = qtd_tabuas(linhas, N, tabuas);
        }
        // Tentar no segundo sentido
        if ((N * 100) % L == 0){
            linhas = (N * 100) / L;
            resultN = qtd_tabuas(linhas, M, tabuas);
        }    
        
        if (resultM ==0 && resultN ==0)
            cout << "impossivel\n";
        else {
            if (resultM ==0) 
                cout << resultN << "\n";
            else if (resultN ==0)
                cout << resultM << "\n";
            else 
                cout << min(resultM, resultN) << "\n";
        }
	    
	}
	

    return 0;
}
