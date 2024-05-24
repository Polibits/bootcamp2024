#include <bits/stdc++.h>
#include <chrono>

using namespace std;

long long COUNT = 0;

long long factorial(long long n) {
    COUNT++;
    if(n == 0) {
        return 1;
    } else {
        return n*factorial(n-1);
    }
}

int main() {
    long long n;
    cin >> n;

    for(int i = 0; i <= n; i++){
        COUNT = 0;
        // execução cronometrada da busca
        auto start = std::chrono::high_resolution_clock::now();
        long long result = factorial(i);
        auto end = chrono::high_resolution_clock::now();

        chrono::duration<double> duration = end - start;

        // exibição dos resultados
        cout << "n: " << i << '\n';
        cout << "factorial: " << result << '\n';
        cout << "count: " << COUNT << '\n';
        cout << "elapsed time: " << duration.count() << "\n\n";
    }


    return 0;
}
