#include <bits/stdc++.h>

using namespace std;

vector<int> primo;

bool isPrime(int x) {
    if (x < 2)
        return false;
    if (x == 2)
        return true;
    if (x % 2 == 0)
        return false;
    for (int i = 3; i * i <= x; i += 2) {
        if (x % i == 0)
            return false;
    }
    return true;
}

void preenche_primos() {
    int i = 2;
    while (primo.size() < 3502) { // Garantimos pelo menos 3501 primos
        if (isPrime(i)) {
            primo.push_back(i);
        }
        i++;
    }
}

int flavious(int n) {
    int r = 0;
    for (int i = 1; i <= n; i++) {
        r = (r + primo[n - i]) % i;
    }
    return r;
}

int main() {
    
    ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    
    int n;
    preenche_primos();
    while (cin >> n && n != 0) {
        cout << flavious(n) + 1 << endl; // +1 pois pessoas são numeradas de 1
    }
    return 0;
}
