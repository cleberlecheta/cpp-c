#include <iostream>
#include "Veiculo.h"

using namespace std;

//Herança
int main() {
    
    Moto *m1 = new Moto();
    Carro *c1 = new Carro;
    
    m1->imp();
    c1->imp();
    
    return 0;
}