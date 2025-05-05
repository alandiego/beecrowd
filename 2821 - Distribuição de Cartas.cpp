#include <bits/stdc++.h>
using namespace std;

int valorCarta(const string& s) {
    if (s == "A") return 1;
    if (s == "J") return 11;
    if (s == "Q") return 12;
    if (s == "K") return 13;
    return stoi(s);
}

bool podeDistribuir(const vector<int>& cartas, int nJogadores, int maxSoma, int& maxCartas) {
    int jogadores = 1;
    int soma = 0;
    int cartasAtual = 0;

    for (int i = 0; i < cartas.size(); ++i) {
        if (soma + cartas[i] > maxSoma) {
            maxCartas = max(maxCartas, cartasAtual);//guarda maior quantidade distriuída ate o momento
            jogadores++;//passa pro prox jogador
            soma = cartas[i]; //inicia proxima distribuicao
            cartasAtual = 1;
        } else {
            soma += cartas[i];
            cartasAtual++;
        }
    }
    
    //guarda maior quantidade de cartas
    maxCartas = max(maxCartas, cartasAtual);
    return jogadores <= nJogadores;
}

int main() {
    int nCartas, nJogadores;
    cin >> nCartas >> nJogadores;

    vector<int> cartas(nCartas);
    string s;
    for (int i = 0; i < nCartas; ++i) {
        cin >> s;
        cartas[i] = valorCarta(s);
    }

    //soma não pode ser menor do que a maior carta
    int lo = *max_element(cartas.begin(), cartas.end());
    //soma não pode ser maior que a soma de todas as cartas
    int hi = accumulate(cartas.begin(), cartas.end(), 0);
    int respostaSoma = hi;
    int respostaCartas = nCartas;

    while (lo <= hi) {
        int mid = (lo + hi) / 2;
        int maxCartasAtual=0;
        if (podeDistribuir(cartas, nJogadores, mid, maxCartasAtual)) {
            respostaSoma = mid;
            respostaCartas = maxCartasAtual;
            hi = mid - 1;
        } else {
            lo = mid + 1;
        }
    }

    cout << respostaCartas << " " << respostaSoma << "\n";
    return 0;
}
