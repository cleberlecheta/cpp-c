#include <iostream>

using namespace std;

int main() {

    /*stores only integer numbers
     * auto-assign from 0 to ...
     * but we can change it
     */
    enum armaduras{cinturao_da_verdade=1, couraca_da_justica, prontidadao_evangelho, escudo_fe, capacete_salvacao, espada_do_espirito};
    armaduras armaduraSelecionada;

    armaduraSelecionada = prontidadao_evangelho;
    cout << armaduraSelecionada;

    return 0;
}
