#include <iostream>
#include <stack>

using namespace std;

int main() {
    int N;
    cin >> N;

    stack<int> binaryDigits; // Pilha para armazenar os dígitos binários

    // Caso especial quando N é 0
    if (N == 0) {
        cout << 0 << endl;
        return 0;
    }

    // Dividir N por 2 e armazenar os restos na pilha
    while (N > 0) {
        binaryDigits.push(N % 2);
        N /= 2;
    }

    // Retirar os dígitos binários da pilha e imprimir
    while (!binaryDigits.empty()) {
        cout << binaryDigits.top();
        binaryDigits.pop();
    }
    cout << endl;

    return 0;
}
