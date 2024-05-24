#include <bits/stdc++.h>

using namespace std;

bool is_sorted(vector<int> vec) {
    for(int i = 0; i < vec.size() - 1; i++) {
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

    auto start = std::chrono::high_resolution_clock::now();
    bool array_sorted = is_sorted(vec);
    auto end = chrono::high_resolution_clock::now();

    chrono::duration<double> duration = end - start;
    cout << "is sorted: " << array_sorted << "\n";
    cout << "duration: " << duration.count() << "\n";

    return 0;
}
