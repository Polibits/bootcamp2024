#include <iostream>
#include <vector>
#include <chrono>

using namespace std;

long long int COMPARISONS_COUNT = 0;
long long int SWAPS_COUNT = 0;

// troca de dois elementos
void swap(int &a, int &b) {
    SWAPS_COUNT++;
    int temp = a;
    a = b;
    b = temp;
}

// função para mesclar dois subvetores
void merge(vector<int> &arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // vetores temporários
    vector<int> L(n1), R(n2);

    // copia os dados para os vetores temporários L[] e R[]
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    // mescla os vetores temporários de volta em arr[left..right]
    int i = 0; // índice inicial do primeiro subvetor
    int j = 0; // índice inicial do segundo subvetor
    int k = left; // índice inicial do subvetor mesclado

    while (i < n1 && j < n2) {
        COMPARISONS_COUNT++;
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // copia os elementos restantes de L[], se houver
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // copia os elementos restantes de R[], se houver
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// ordena o vetor pelo merge sort
void merge_sort(vector<int> &arr, int left, int right) {
    if (left >= right)
        return;

    int mid = left + (right - left) / 2;

    // Ordena a primeira e a segunda metade
    merge_sort(arr, left, mid);
    merge_sort(arr, mid + 1, right);

    // Mescla as duas metades ordenadas
    merge(arr, left, mid, right);
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
    merge_sort(vec, 0, vec.size() - 1);
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
