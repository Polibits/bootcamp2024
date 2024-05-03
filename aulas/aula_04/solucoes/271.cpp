#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool isWellFormed(string expression) {
    stack<char> s;  // Nosso stack
    for (string::iterator it = expression.begin(); it != expression.end(); it++) {  // Itera sobre 'expression' caracter por caracter
        char c = *it;  // Acesso ao caracter correspondente ao 'it' (dereferenciação)
        if (c == '(' || c == '[' || c == '{') {  // Se for abertura, empilha o caracter
            s.push(c);
        } else {  // Se for fechamento, tentamos remover a abertura correspondente do topo da pilha
            if (s.empty()) return false;
            char top = s.top();
            s.pop();
            if ((c == ')' && top != '(') ||  // Se o par não estiver no topo, a expressão não é bem formada
                (c == ']' && top != '[') ||
                (c == '}' && top != '{')) {
                return false;
            }
        }
    }
    return s.empty();
}

int main() {
    int N;
    cin >> N;
    cin.ignore();  // Ignora o '\n' que fica depois da leitura de N

    string expression;
    while (N--) {  // Roda N vezes
        getline(cin, expression);  // Captura uma linha e salva em 'expression'
        if (isWellFormed(expression))
            cout << 'S' << endl;
        else
            cout << 'N' << endl;
    }

    return 0;
}
