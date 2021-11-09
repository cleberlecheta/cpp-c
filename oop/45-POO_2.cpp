#include <iostream>
#include "Aviao.h"

using namespace std;

int main() {

    //mesma ciosa da aula 44 porem com a classe em um arquivo separdo.
    //o método de inicialização se tornou o construtor

    Aviao *av1 = new Aviao(3);
    cout << "Tipo: " << av1->tipo << endl;
    cout << "Velocidade MAX: " << av1->velMax << "\n" << endl;

    Aviao *av2 = new Aviao(2);
    cout << "Tipo: " << av2->tipo << endl;
    cout << "Velocidade MAX: " << av2->velMax << "\n" << endl;

    Aviao *av3 = new Aviao(1);
    cout << "Tipo: " << av3->tipo << endl;
    cout << "Velocidade MAX: " << av3->velMax << "\n" << endl;
    
    av1->imprimir();
    av2->imprimir();
    av3->imprimir();
    
    return 0;
}