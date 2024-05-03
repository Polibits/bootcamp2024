#include <iostream>
#include <string>

using namespace std;

int main() {
    int N;            // Número de questões
    string gabarito;  // Gabarito das respostas
    string respostas; // Respostas do candidato
    int acertos = 0;  // Contador de acertos

    // Lê o número de questões
    cin >> N;

    // Lê o gabarito da prova
    cin >> gabarito;

    // Lê as respostas do candidato
    cin >> respostas;

    // Compara as respostas do candidato com o gabarito
    for (int i = 0; i < N; i++) {
        if (gabarito[i] == respostas[i]) {
            acertos++;  // Incrementa o contador de acertos
        }
    }

    // Imprime o número de acertos
    cout << acertos << endl;

    return 0;
}
