#include <iostream>

using namespace std;

int main() {
  int idade;
  cin >> idade;
  cout << "Você tem " << idade << " anos" << endl;
  for (int i = idade - 1; i >= 0; i--) {
    cout << "Em " << 2024 - i << " você tinha " << idade - i << " anos" << endl;
  }

  if (idade >= 18) {
    cout << "Você é maior de idade" << endl;
  }
}
