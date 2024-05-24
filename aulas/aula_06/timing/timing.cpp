#include <bits/stdc++.h>
#include <chrono>

using namespace std;

void my_function(int n) {
    for(int i = 0; i < n; i++){
        int x = 12;
        int y = 31;
        int c = x + y;
    }
}

void measure() {
    int n;
    cin >> n;
    auto start = std::chrono::high_resolution_clock::now();
    my_function(n);
    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double> duration = end - start;
    cout << "duration: " << duration.count() << "\n";
    cout << "duration per call: " << duration.count()/n << "\n";
}

int main() {
    measure();
    return 0;
}
