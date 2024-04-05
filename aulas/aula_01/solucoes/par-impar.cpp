// https://neps.academy/br/exercise/148
// Par ou impar
#include <iostream>

using namespace std;

int main(){
    // Lendo a entrada do exercício
    int B, C;
    cin >> B >> C;

    // Seu código vai aqui
    cout << ((B + C) % 2 == 0 ? "Bino" : "Cino") << endl;
    return 0;
}
