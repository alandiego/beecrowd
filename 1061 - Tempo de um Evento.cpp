#include <iostream>
using namespace std;

int main() {
    string lixo;
    int diaInicio, diaFim;
    int h1, m1, s1, h2, m2, s2;

    // Leitura da data e hora de início
    cin >> lixo >> diaInicio;
    scanf("%d : %d : %d", &h1, &m1, &s1);

    // Leitura da data e hora de fim
    cin >> lixo >> diaFim;
    scanf("%d : %d : %d", &h2, &m2, &s2);

    // Converte tudo para segundos
    int inicioSegundos = s1 + m1 * 60 + h1 * 3600 + diaInicio * 86400;
    int fimSegundos = s2 + m2 * 60 + h2 * 3600 + diaFim * 86400;

    int duracao = fimSegundos - inicioSegundos;

    int dias = duracao / 86400;
    duracao %= 86400;
    int horas = duracao / 3600;
    duracao %= 3600;
    int minutos = duracao / 60;
    int segundos = duracao % 60;

    // Saída
    cout << dias << " dia(s)" << endl;
    cout << horas << " hora(s)" << endl;
    cout << minutos << " minuto(s)" << endl;
    cout << segundos << " segundo(s)" << endl;

    return 0;
}
