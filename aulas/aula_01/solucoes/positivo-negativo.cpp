// https://neps.academy/br/exercise/145
// Positivo negativo ou nulo
#include <iostream>

using namespace std;

int main(){
    // Lendo a entrada do exercício
    int X;
    cin >> X;

    // Seu código vai aqui
    if (X > 0) cout << "positivo" << endl;
    if (X == 0) cout << "nulo" << endl;
    if (X < 0) cout << "negativo" << endl;
    return 0;
}
