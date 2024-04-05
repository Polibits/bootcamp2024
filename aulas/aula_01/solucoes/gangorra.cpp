// https://neps.academy/br/exercise/260
// Gangorra
#include <iostream>

using namespace std;

int main(){
    // Lendo a entrada do exercício
    int P1, C1, P2, C2;
    cin >> P1 >> C1 >> P2 >> C2;

    // Seu código vai aqui
    if (P1*C1 == P2*C2) {
        cout << 0 << endl;
    } else if (P1*C1 < P2*C2) {
        cout << 1 << endl;
    } else {
        cout << -1 << endl;
    }
    return 0;
}
