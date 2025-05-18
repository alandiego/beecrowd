#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int N, C, M,  TC=0;
	
	while (cin >> N && N){
	    
	    cout << "Turma " << ++TC << "\n";
	    
	    vector<pair<int, int>> notas;
	    int maior=-1;;
	    
	    for (int i=0; i<N; ++i){
	        cin >> C >> M;
	        notas.push_back({C, M});
	        maior = max(M, maior);
	    }
	    
	    for (auto &aluno : notas){
	        if (aluno.second == maior)
	            cout << aluno.first << " ";
	    }
	        
	    cout << "\n\n";
	}

    return 0;
}
