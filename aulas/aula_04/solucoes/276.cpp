#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<char> teams;
    
    // Coloca todos os times em uma fila
    for (char team = 'A'; team <= 'P'; ++team)
        teams.push(team);
    
    // Processa cada uma das 15 partidas
    for (int i = 0; i < 15; ++i) {
        int M, N;
        cin >> M >> N; // Lê o resultado da partida
        
        char team1 = teams.front(); teams.pop();
        char team2 = teams.front(); teams.pop();
        
        // O time que ganha volta para o fim da fila
        if (M > N)
            teams.push(team1);
        else
            teams.push(team2);
    }
    
    // O último time restante é o campeão
    cout << teams.front() << endl;
    
    return 0;
}
