#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int A, B, temp;
    
    while (cin >> A >> B && A && B){
        set<int> alice;
        set<int> beatriz;
        
        for (int i=0; i<A; ++i){
            cin >> temp;
            alice.insert(temp);
        }
        for (int i=0; i<B; ++i){
            cin >> temp;
            beatriz.insert(temp);
        }
        
        // Conta quantos elementos exclusivos Alice tem (não estão com Beatriz)
        int troca_alice = 0;
        for (int x : alice) {
            if (beatriz.find(x) == beatriz.end()) {
                ++troca_alice;
            }
        }

        // Conta quantos elementos exclusivos Beatriz tem (não estão com Alice)
        int troca_beatriz = 0;
        for (int x : beatriz) {
            if (alice.find(x) == alice.end()) {
                ++troca_beatriz;
            }
        }

        // O número de trocas possíveis é o menor entre os dois
        cout << min(troca_alice, troca_beatriz) << "\n";
    }
    
    return 0;
}
