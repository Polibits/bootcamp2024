#include <bits/stdc++.h>
#include <chrono>

using namespace std;

long long COUNT = 0;

long long exp(int expoent) {
    COUNT++;
    if(expoent == 0)
        return 1;

    return 2 * exp(expoent - 1);
}

int main() {
    int n;
    cin >> n;

    COUNT = 0;
    // execução cronometrada da busca

    for(int i = 0; i <= n; i++){
        auto start = std::chrono::high_resolution_clock::now();
        int result = exp(i);
        auto end = chrono::high_resolution_clock::now();
        chrono::duration<double> duration = end - start;

        // exibição dos resultados
        cout << "n: " << i << '\n';
        cout << "2^n: " << result << '\n';
        cout << "count: " << COUNT << '\n';
        cout << "elapsed time: " << duration.count() << "\n\n";
    }

    return 0;
}
