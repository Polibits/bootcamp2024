#include <bits/stdc++.h>
#include <chrono>

using namespace std;

long long COUNT = 0;

long long non_recursive_fib(int n) {
    COUNT++;
    long long a = 0, b = 1, c;

    if (n == 0)
        return a;

    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n;
    cin >> n;

    COUNT = 0;
    // execução cronometrada da busca

    for(int i = 0; i <= n; i++){
        auto start = std::chrono::high_resolution_clock::now();
        long long result = non_recursive_fib(i);
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
