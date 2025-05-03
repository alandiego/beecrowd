#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	double renda;
	double faixa2, faixa3, faixa4;
	double imposto =0;
	
	cin >> renda;
	
	if (renda <= 2000.0){
	    cout  <<"Isento\n";
	    return 0;
	}
    
    faixa2 = renda - 2000;
    faixa3 = renda - 3000;
    faixa4 = renda - 4500;
    
    if (faixa3<0)
        faixa3=0;
    if (faixa4<0)
        faixa4=0;
    
    (faixa2 < 1000) ? imposto += faixa2*0.08 : imposto += 1000*0.08;
    (faixa3 < 1500) ? imposto += faixa3*0.18 : imposto += 1500*0.18;
    imposto += faixa4*0.28;
    
    cout << fixed << setprecision(2) << "R$ " << imposto << "\n";
    
    return 0;
}
