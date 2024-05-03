#include <cstdio>
#include <vector>

int main()
{
    std::vector<int> vetorDeInteiros;
    vetorDeInteiros.push_back(1);
    vetorDeInteiros.push_back(2);
    vetorDeInteiros.push_back(3);
    vetorDeInteiros.push_back(4);
    vetorDeInteiros.push_back(5);
    vetorDeInteiros.push_back(6);
    vetorDeInteiros.push_back(7);
    printf("Elemento do vetor: ");
    for (int i = 0; i < vetorDeInteiros.size(); i++)
    {
        printf("%d, ", vetorDeInteiros[i]);
    }
    printf("\n");

    printf("Primeiro elemento: %d\n", vetorDeInteiros.front());
    printf("Ultimo elemento: %d\n", vetorDeInteiros.back());
    printf("Quarto elemento: %d\n", vetorDeInteiros[3]);

    vetorDeInteiros.clear();
    printf("Elemento do vetor vazio: ");
    for (int i = 0; i < vetorDeInteiros.size(); i++)
    {
        printf("%d ", vetorDeInteiros[i]);
    }
    printf("\n");

    // Inicializando um vetor com elementos
    std::vector<int> vetorPreenchido = {1,
                                        10,
                                        100,
                                        1000};

    printf("Elemento do vetor preenchido: ");
    for (int i = 0; i < vetorPreenchido.size(); i++)
    {
        printf("%d, ", vetorPreenchido[i]);
    }
    printf("\n");

    // Criando uma copia de parte de um vetor
    std::vector<int> copiaDoVetor(vetorPreenchido.begin() + 2, vetorPreenchido.end());
    printf("Elemento do vetor copia: ");
    for (int i = 0; i < copiaDoVetor.size(); i++)
    {
        printf("%d, ", copiaDoVetor[i]);
    }
    printf("\n");

    // Criando um vector com tamanho definido

    std::vector<int> vetorDefinido(10);
    for (int i = 0; i < vetorDefinido.size(); i++)
    {
        vetorDefinido[i] = i + 10;
    }
    printf("Elementos do vetor definido: ");
    for (int i = 0; i < vetorDefinido.size(); i++)
    {
        printf("%d, ", vetorDefinido[i]);
    }
    printf("\n");

    return 0;
}
