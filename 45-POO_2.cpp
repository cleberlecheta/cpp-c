#include <iostream>
#include "Aviao.h"

using namespace std;

int main() {
    Aviao *av1 = new Aviao(1);
    cout << "Tipo: " << av1->tipo << endl;
    cout << "Velocidade MAX: " << av1->velMax << "\n" << endl;

    Aviao *av2 = new Aviao(2);
    cout << "Tipo: " << av2->tipo << endl;
    cout << "Velocidade MAX: " << av2->velMax << "\n" << endl;

    Aviao *av3 = new Aviao(1);
    cout << "Tipo: " << av3->tipo << endl;
    cout << "Velocidade MAX: " << av3->velMax << "\n" << endl;
    
    return 0;
}