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

// Função para particionar o vetor usando o último elemento como pivô
int partition(vector<int> &arr, int low, int high) {
    int pivot = arr[high];  // pivô
    int i = (low - 1);  // Índice do menor elemento

    for (int j = low; j < high; j++) {
        COMPARISONS_COUNT++;
        // Se o elemento atual é menor ou igual ao pivô
        if (arr[j] <= pivot) {
            i++;    // incrementa o índice do menor elemento
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

// ordena o vetor pelo quick sort
void quick_sort(vector<int> &arr, int low, int high) {
    if (low < high) {
        // pi é o índice de particionamento, arr[pi] está no lugar certo
        int pi = partition(arr, low, high);

        // Ordena os elementos antes e depois da partição
        quick_sort(arr, low, pi - 1);
        quick_sort(arr, pi + 1, high);
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
    quick_sort(vec, 0, vec.size() - 1);
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
