#include <iostream>

using namespace std;

int main() {
    enum armaduras{cinturao_da_verdade=1, couraca_da_justica, prontidadao_evangelho, escudo_fe, capacete_salvacao, espada_do_espirito};
    armaduras armadura1;

    armadura1 = couraca_da_justica;
    cout << armadura1;

    return 0;
}
