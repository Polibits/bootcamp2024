// https://neps.academy/br/exercise/86
// Aprovado ou reprovado
#include <iostream>

using namespace std;

int main(){
    // Lendo a entrada do exercício
    double A, B;
    cin >> A >> B;

    // Seu código vai aqui
    if ((A + B)/2 >= 7.0) {
        cout << "Aprovado" << endl;
    } else if ((A+B)/2 >= 4) {
        cout << "Recuperacao" << endl;
    } else {
        cout << "Reprovado" << endl;
    }
    return 0;
}
