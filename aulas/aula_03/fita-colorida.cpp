#include <iostream>
#include <vector>

using namespace std;

int main(){
    // Seu código vai aqui
    int N;
    cin >> N;
    vector<int> fita(N);
    // Inicializar os valores da fita
    for (int i = 0; i < N; i++) {
        cin >> fita[i];
    }

    for (int i = 0; i < N; i++) {
        // Pular o quadrado se
        // Já tiver zero
        if (fita[i] == 0) {
          cout << fita[i] << " ";
          continue;
        } else {
            // Começamos com uma distância
            // infinita (ou muito grande)
            int min_dist = 99999;
            int dist = 0;
            // Olhando para a direita
            for (int j = i + 1; j < N; j++) {
                dist = j - i;
                if (fita[j] == 0) {
                    min_dist = min(min_dist, dist);
                    break;
                }
            }
            // Olhando para a esquerda
            for (int j = i - 1; j >= 0; j--) {
                dist = i - j;
                if (fita[j] == 0) {
                    min_dist = min(min_dist, dist);
                    break;
                }
            }

            // Se a distancia minima for maior que 9
            // precisamos preencher com 9
            min_dist = min(min_dist, 9);

            fita[i] = min_dist;
        }

        cout << fita[i] << " ";
    }

    cout << endl;

    return 0;
}
