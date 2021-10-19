#include <iostream>
#include <stack>

using namespace std;

int main() {
    cout << "Stack/Pilhas - o última a entrar é o primeiro a sair \n\n";
    stack <string> veiculos;

    veiculos.push("tatimobile");
    cout << "adicionado: tatimobile\n";
    veiculos.push("honda dream");
    cout << "adicionado: honda dream\n";
    veiculos.push("blue");
    cout << "adicionado: blue\n";
    veiculos.push("plataforma-flutuante");
    cout << "adicionado: plataforma-flutuante\n\n";

    cout << "Tamanho da pilha: " << veiculos.size() << "\n";

    while (veiculos.size()>0) {
        cout << "Veículo top: " << veiculos.top() << "\n";
        veiculos.pop();
    }

    return 0;
}
