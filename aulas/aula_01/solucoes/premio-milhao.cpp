// https://neps.academy/br/exercise/48
// Premio do milhão
#include <iostream>

using namespace std;

int main(){
    // Seu código vai aqui
    int dias = 0;
    cin >> dias;
    int soma = 0;
    
    int visitantes = 0;
    for (int i = 1; i <= dias; i++) {
        cin >> visitantes;
        soma += visitantes;
        if (soma >= 1000000) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}
