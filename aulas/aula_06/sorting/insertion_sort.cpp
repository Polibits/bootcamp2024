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

// ordena o vetor pelo insertion sort
void insertion_sort(vector<int> &arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        // Move os elementos de arr[0..i-1], que são maiores que a chave,
        // para uma posição à frente da sua posição atual
        while (j >= 0) {
            COMPARISONS_COUNT++;
            if (arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
                SWAPS_COUNT++;
            } else {
                break;
            }
        }
        arr[j + 1] = key;
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
    insertion_sort(vec);
    auto end = chrono::high_resolution_clock::now();

    chrono::duration<double> duration = end - start;

    // exibição dos resultados
    cout << "comparisons count: " << COMPARISONS_COUNT << '\n';
    cout << "swaps count: " << SWAPS_COUNT << '\n';
    cout << "elapsed time: " << duration.count() << '\n';
    cout << "result: " << '\n';
    print_vector(vec);
    
    return 0;
}
