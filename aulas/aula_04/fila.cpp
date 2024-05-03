#include <cstdio>
#include <queue>

int main() {
    std::queue<int> fila;

    // Adicionando elementos na fila
    for (int i = 1; i <= 10; i++) {
        fila.push(i);
    }

    // Exibindo o primeiro elemento da fila
    printf("Primeiro da fila: %d\n", fila.front());
    printf("A fila está vazia? %s\n", fila.empty() ? "Sim" : "Não");

    // Removendo o elemento 1
    fila.pop();

    // Exibindo o novo primeiro elemento da fila
    printf("Primeiro da fila agora é: %d\n", fila.front());

    // Removendo mais elementos
    fila.pop(); // Remove o 2
    fila.pop(); // Remove o 3
    fila.pop(); // Remove o 4
    fila.pop(); // Remove o 5

    // Exibindo o novo primeiro elemento da fila
    printf("Primeiro da fila após várias remoções: %d\n", fila.front());

    return 0;
}
