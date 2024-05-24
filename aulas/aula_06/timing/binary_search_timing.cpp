#include <bits/stdc++.h>
#include <chrono>

using namespace std;

int CHECKING_COUNT = 0;

int binary_search(vector<int> list, int element) {
    int left = 0;
    int right = list.size() - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        CHECKING_COUNT = CHECKING_COUNT + 1;
        // Verifica se o elemento alvo está presente no meio
        if (list[mid] == element) {
            return mid; // Retorna o índice do elemento
        }

        // Se o elemento alvo for maior, ignore a metade esquerda
        if (list[mid] < element) {
            left = mid + 1;
        }
        // Se o elemento alvo for menor, ignore a metade direita
        else {
            right = mid - 1;
        }
    }

    return -1;
}

void solve() {
    int n; // quantidade de elementos do vetor
    int x; // número procurado
    vector <int> vec; // lista de entrada
    CHECKING_COUNT = 0;

    // leitura
    cin >> n >> x;
    for(int i = 0; i < n; i++){
        int aux;
        cin >> aux;
        vec.push_back(aux);
    }

    auto start = std::chrono::high_resolution_clock::now();
    int y = binary_search(vec, x);
    auto end = chrono::high_resolution_clock::now();

    chrono::duration<double> duration = end - start;

    cout << CHECKING_COUNT << ";" << duration.count() << '\n';
}

int main() {
    int n_tests;
    cin >> n_tests;

    cout << "n;t\n";
    for(int i = 0; i < n_tests; i++) {
        solve();
    }

    return 0;
}
