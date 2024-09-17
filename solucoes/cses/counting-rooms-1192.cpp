// Conceitos envolvidos: flood-fill, grafos, dfs
// Capítulo de grafos do Competitive Programmer's Handbook (procurar na internet <3)
// submissão: https://cses.fi/problemset/result/10545337/
// enunciado: https://cses.fi/problemset/task/1192/

#include <iostream>

using namespace std;

bool visited[1000][1000];
char grid[1000][1000];

int n, m;

void dfs(int i, int j) {
    // esse primeiro if simplesmente retorna se estivermos num nó inválido
    // simplifica muito o código pois não precisamos checar antes de chamar
    // dfs nos vizinhos se o vizinho realmente é um nó visitável
    if (grid[i][j] == '#' || i < 0 || i >= n || j < 0 || j >= m) return;
    if (visited[i][j]) return;
    visited[i][j] = true;

    // visitamos todas as células adjacentes
    dfs(i - 1, j); 
    dfs(i + 1, j); 
    dfs(i, j - 1); 
    dfs(i, j + 1); 
}

int main() {
    // Entrada
    cin >> n >> m;

    // Guardamos a grade inteira antes de processá-la
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }


    // Ideia: cada '.' é um nó de um grafo
    // '.'s adjacentes estão conectados
    // sempre que acharmos um nó não visitado
    // rodamos uma dfs a partir dele e tentamos visitar
    // todos os seus vizinhos
    //
    // cada componente do grafo é um quarto. 
    // Como visitamos um componente inteiro a cada
    // dfs, basta somar 1 no nosso count toda vez que encontramos
    // um componente novo (ou seja, um piso que ainda não foi visitado) 
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (!visited[i][j] && grid[i][j] == '.') 
            {
                dfs(i, j);
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}