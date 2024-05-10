#include <iostream>
// Inclusão da estrutura de dados map
#include <map>

using namespace std;

int main(){
    map<int, int> versions;
    map<int, bool> atualizados;
    // Leitura dos dados
    int c, n;
    cin >> c >> n;
    for (int i = 0; i < c; i++) {
        int pi, vi;
        cin >> pi >> vi;
        versions[pi] = vi;
    }

    for (int j = 0; j < n; j++) {
        int pj, vj;
        cin >> pj >> vj;
        // Se o aplicativo é novo, ou se a versão que temos instalada é mais antiga, instalamos ele
        if (versions.find(pj) == versions.end() || versions[pj] < vj) {
            versions[pj] = vj;
            atualizados[pj] = true;
        }
    }

    // Para mais informações sobre esse tipo de loop: https://www.digitalocean.com/community/tutorials/foreach-loop-c-plus-plus
    // Equivalente ao que o Heitor ensinou na aula 4 com iteradores
    for (auto pair : atualizados) {
        cout << pair.first << " " << versions[pair.first] << endl;
    }
    
    return 0;
}
