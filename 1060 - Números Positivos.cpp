#include <iostream>
using namespace std;

int main() {
    int count = 0;
    double valor;

    for (int i = 0; i < 6; i++) {
        cin >> valor;
        if (valor > 0)
            count++;
    }

    cout << count << " valores positivos" << endl;

    return 0;
}
