#include <iostream>
#include "classes.h"

using namespace std;

//Herança Múltipla
int main() {
    
    Base1 *obj1 = new Base1();
    Base2 *obj2 = new Base2();
    HMulti *obj3 = new HMulti();

    obj1->impBase1();
    obj2->impBase2();

    obj3->impBase1();
    obj3->impBase2();
    
    return 0;
}