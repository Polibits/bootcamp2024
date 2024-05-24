#include <bits/stdc++.h>
#include <chrono>

using namespace std;

int CHECKING_COUNT = 0;

int linear_search(vector<int> list, int element) {
    for(int i = 0; i < list.size(); i++){
        CHECKING_COUNT++;
        if(list[i] == element){
            return i;
        }
    }

    return -1;
}

int main() {
    int n; // quantidade de elementos do vetor
    int x; // número procurado
    vector <int> vec; // lista de entrada
    
    // leitura
    cin >> n >> x;
    for(int i = 0; i < n; i++){
        int aux;
        cin >> aux;
        vec.push_back(aux);
    }

    // execução cronometrada da busca
    auto start = std::chrono::high_resolution_clock::now();
    int result = linear_search(vec, x);
    auto end = chrono::high_resolution_clock::now();

    chrono::duration<double> duration = end - start;

    // exibição dos resultados
    cout << "result: " << result << '\n';
    cout << "checking count: " << CHECKING_COUNT << '\n';
    cout << "elapsed time: " << duration.count() << '\n';

    return 0;
}
