#include <iostream>
#include <vector>
#include <chrono>

using namespace std;

int COMPARISONS_COUNT = 0;
int SWAPS_COUNT = 0;

// troca de dois elementos
void swap(int &a, int &b) {
    SWAPS_COUNT++;
    int temp = a;
    a = b;
    b = temp;
}

// ordena um vetor pelo bubble sort
void bubble_sort(vector<int> &arr) {
    int n = arr.size();
    for (int i = 0; i < n-1; i++) {
        // Últimos i elementos já estão na ordem correta
        for (int j = 0; j < n-i-1; j++) {
            COMPARISONS_COUNT++;
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

// exibe o conteúdo do vetor
void print_vector(const vector<int> &arr) {
    for (int val : arr) {
        cout << val << " ";
    }
    cout << endl;
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

    // execução cronometrada da ordenação
    auto start = std::chrono::high_resolution_clock::now();
    bubble_sort(vec);
    auto end = chrono::high_resolution_clock::now();

    chrono::duration<double> duration = end - start;

    // exibição dos resultados
    cout << "result: " << '\n';
    print_vector(vec);
    cout << "\n";
    cout << "comparisons count: " << COMPARISONS_COUNT << '\n';
    cout << "swaps count: " << SWAPS_COUNT << '\n';
    cout << "elapsed time: " << duration.count() << '\n';

    
    
    return 0;
}
