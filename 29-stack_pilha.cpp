#include <iostream>
#include <stack>

using namespace std;

int main() {
    cout << "Stack/Pilhas - o última a entrar é o primeiro a sair \n\n";
    stack <string> veiculos;

    if (veiculos.empty()) {
      cout << "Pilha vazia!\n";
    } else {
        cout << "já existe conteúdo na Pilha ***\n";
    }

    veiculos.push("tatimobile");
    cout << "adicionando: tatimobile\n";
    veiculos.push("honda dream");
    cout << "adicionando: honda dream\n";
    veiculos.push("blue");
    cout << "adicionando: blue\n";
    veiculos.push("plataforma-flutuante");
    cout << "adicionando: plataforma-flutuante\n\n";

    cout << "Tamanho da pilha: " << veiculos.size() << "\n";

    while (veiculos.size()>0) {
        cout << "Veículo top: " << veiculos.top() << "\n";
        veiculos.pop();
    }

    return 0;
}
