#include <iostream>
#include <queue>

using namespace std;

int main() {
    cout << "Queue/Fila - o primeiro a entrar é o primeiro a sair \n\n";
    /*
    empty
    size
    front
    back
    push
    pop
    */

    queue <string> veiculos;
    veiculos.push("tatimobile");
    cout << "adicionando: tatimobile\n";
    veiculos.push("honda dream");
    cout << "adicionando: honda dream\n";
    veiculos.push("blue");
    cout << "adicionando: blue\n";
    veiculos.push("plataforma-flutuante");
    cout << "adicionando: plataforma-flutuante\n\n";

    cout << "Tamanho da FILA: " << veiculos.size() << "\n";
    cout << "primeiro: " << veiculos.front() << "\n";
    cout << "ultimo: " << veiculos.back() << "\n\n";

    int count=0;
    while (!veiculos.empty()) {
        count++;
        cout << count << "- " << veiculos.front() << "\n";
        veiculos.pop();
    }

    return 0;
}
