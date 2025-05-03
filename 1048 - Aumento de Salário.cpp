#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	double valor;
	double novo_salario;
	double reajuste;
	int percentual;
	
	cin >> valor;
	
	if (valor <= 400.0){
	    novo_salario = valor*1.15;
	    reajuste = valor*0.15;
	    percentual = 15;
	} else if (valor <= 800.0) {
	    novo_salario = valor*1.12;
	    reajuste = valor*0.12;
	    percentual = 12;
	} else if (valor <= 1200.0) {
	    novo_salario = valor*1.10;
	    reajuste = valor*0.10;
	    percentual = 10;
	} else if (valor <= 2000.0) {
	    novo_salario = valor*1.07;
	    reajuste = valor*0.07;
	    percentual = 7;
	} else {
	    novo_salario = valor*1.04;
	    reajuste = valor*0.04;
	    percentual = 4;
	}
	
	cout << fixed << setprecision(2);
	cout << "Novo salario: " << novo_salario << "\n";
	cout << "Reajuste ganho: " << reajuste << "\n";
	cout << "Em percentual: " << percentual << " %\n";

    return 0;
}
