#include <string>  // objeto string
#include <iostream>  // cin e cout

using namespace std;

int main() {
    cout << "Exemplo 1:" << endl;
    cout << "Pega os próximos 2 caracteres, separado por espaço ou não\n";
    char a, b;
    cin >> a >> b;
    cout << "A = " << a << " B = " << b << "\n\n";

    cout << "Exemplo 2:" << endl;
    cout << "Pega a próxima sequência de caracteres separadas por whitespace (espaço, quebra de linha ou tab)\n";
    string frase2;
    cin >> frase2;
    cout << "Sua frase é " << frase2 << "\n\n";

    cin.ignore(); // Ignora quebra de linha da frase anterior
    cout << "Exemplo 3:" << endl;
    cout << "Pega tudo até encontrar uma quebra de linha\n";
    string frase3;
    getline(cin, frase3); 
    cout << "Sua frase é " << frase3 << "\n\n";

    string str1, str2;
    cout << "Exemplo 4:" << endl;
    cout << "Compara 2 strings caracter a caracter e diz quem vem primeiro em ordem alfabética\n";
    cout << "Primeira string: ";
    getline(cin, str1);
    cout << "Segunda string: ";
    getline(cin, str2);
    if (str1 < str2) {
        cout << "A palavra " << str1 << " vem primeiro na ordem alfabética\n\n";
    }
    else {
        cout << "A palavra " << str2 << " vem primeiro na ordem alfabética\n\n";
    }

    cout << "Exemplo 5:" << endl;
    cout << "Concatena 2 strings em apenas 1 string\n";
    string palavra1, palavra2, palavra3;
    getline(cin, palavra1);
    getline(cin, palavra2);
    palavra3 = palavra1 + " " + palavra2;
    cout << palavra3 << endl;

    return 0;
}
