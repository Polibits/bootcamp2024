// https://neps.academy/br/exercise/52
// Lampadas
#include <iostream>

using namespace std;

int main(){
    // Seu código vai aqui
    bool a = false, b  = false;
    int apertos = 0;
    cin >> apertos;
    int interruptor = 0;
    for (int i = 0; i < apertos; i++) {
        cin >> interruptor;
        if (interruptor == 1) {
            a = !a;
        } else {
        // Segundo interruptor
            a = !a;
            b = !b;
        }
    }

    cout << (a ? 1 : 0) << endl;
    cout << (b ? 1 : 0) << endl;
    
    
    return 0;
}
