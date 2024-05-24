#include <bits/stdc++.h>
#include <chrono>

using namespace std;

void my_function(int n) {
    double s = 1;
    for(int i = 0; i < n; i++){
        s *= i;
    }
}

void measure() {
    int n;
    cin >> n;

    // execução cronometrada da função
    auto start = std::chrono::high_resolution_clock::now();
    my_function(n);
    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double> duration = end - start;

    cout << "elapsed time: " << duration.count() << "\n";
    cout << "mean elapsed time per call: " << duration.count()/n << "\n";
}

int main() {
    measure();
    return 0;
}
