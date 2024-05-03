#include <cstdio>
#include <stack>

int main()
{

    std::stack<int> pilha1;

    for (int i = 1; i <= 10; i++)
    {
        pilha1.push(i);
    }

    printf("Topo da pilha %d\n", pilha1.top());
    printf("A pilha tá vazia? %s\n", pilha1.empty() ? "Sim" : "Não");

    pilha1.pop(); // Remove o 10

    printf("Topo da pilha %d\n", pilha1.top());

    pilha1.pop(); // Remove o 9
    pilha1.pop(); // Remove o 8
    pilha1.pop(); // Remove o 7
    pilha1.pop(); // Remove o 6

    printf("Topo da pilha %d\n", pilha1.top());
}
