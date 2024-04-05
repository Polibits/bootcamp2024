// https://neps.academy/br/exercise/87
// Fliper
#include <iostream>

using namespace std;

int main(){
    // Lendo a entrada do exercício
    int P, R;
    cin >> P >> R;

    // Seu código vai aqui
    if (P ==0) cout << 'C' << endl;
    if (R == 0 && P == 1) cout << 'B' << endl;
    if (R == 1 && P == 1) cout << 'A' << endl;
    return 0;
}
