#include <iostream>
#include "classes.h"

using namespace std;

//Herança
int main() {
    
    Moto *m1 = new Moto();
    cout << m1->tipo;
    
    return 0;
}