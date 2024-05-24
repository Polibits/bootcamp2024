#include <bits/stdc++.h>
#include <chrono>

using namespace std;

long long COUNT = 0;

long long fib(long long n) {
    COUNT++;
    if(n == 0 || n == 1)
        return 1;

    return fib(n-1) + fib(n-2);
}

int main() {
    int n;
    cin >> n;

    COUNT = 0;
    // execução cronometrada da busca

    for(int i = 0; i <= n; i++){
        auto start = std::chrono::high_resolution_clock::now();
        long long result = fib(i);
        auto end = chrono::high_resolution_clock::now();
        chrono::duration<double> duration = end - start;

        // exibição dos resultados
        cout << "n: " << i << '\n';
        cout << "f_n: " << result << '\n';
        cout << "count: " << COUNT << '\n';
        cout << "elapsed time: " << duration.count() << "\n\n";
    }

    return 0;
}
