#include <bits/stdc++.h>
#include <chrono>

using namespace std;

int CHECKING_COUNT = 0;

bool is_sorted(vector<int> vec) {
    for(int i = 0; i < vec.size() - 1; i++) {
        CHECKING_COUNT++;
        if(vec[i+1] < vec[i])
            return false;
    }
    return true;
}

int main() {
    int n;
    vector<int> vec;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int aux;
        cin >> aux;
        vec.push_back(aux);
    }

    // execução cronometrada da busca
    auto start = std::chrono::high_resolution_clock::now();
    int result = is_sorted(vec);
    auto end = chrono::high_resolution_clock::now();

    chrono::duration<double> duration = end - start;

    // exibição dos resultados
    cout << "result: " << result << '\n';
    cout << "checking count: " << CHECKING_COUNT << '\n';
    cout << "elapsed time: " << duration.count() << '\n';

    return 0;
}
