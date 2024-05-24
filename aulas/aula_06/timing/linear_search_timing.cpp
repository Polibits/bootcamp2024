#include <bits/stdc++.h>
#include <chrono>

using namespace std;

int CHECKING_COUNT = 0;

int linear_search(vector<int> list, int element) {
    for(int i = 0; i < list.size(); i++){
        CHECKING_COUNT = CHECKING_COUNT + 1;
        if(list[i] == element){
            return i;
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
    int y = linear_search(vec, x);
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
