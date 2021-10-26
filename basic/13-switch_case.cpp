#include <iostream>
using namespace std;

int main() {
    int val;

    cout << "Selecione uma cor:\n";
    cout << "[1]=Verde, [2]=Azul, [3]=Vermelho, [4,5,6]=Outra\n";

    cin >> val;

    //pode-se utilizar switch ainhado, um switch dentro de um case de um switch existente

    switch (val) {
    case 1:
        cout << "Cor selecionada: Verde \n";
        break;
    case 2:
        cout << "Cor selecionada: Azul \n";
        break;
    case 3:
        cout << "Cor selecionada: Vermelho \n";
        break;
    case 4:
    case 5:
    case 6:
        cout << "Voce selecionou outra cor \n";
        break;
    default:
        cout << "Valor selecionado inválido \n";
    }

    cout << "\n Programa finalizado \n";

    return 0;
}