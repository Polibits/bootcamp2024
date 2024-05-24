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

    cout << is_sorted(vec) << "\n";

    return 0;
}
