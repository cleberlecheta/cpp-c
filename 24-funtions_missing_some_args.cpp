#include <iostream>

using namespace std;

// a inicializacao com um valor padrao, permite omitir o argumento
void imp(string texto="padrao"); 

int main() {
    imp("texto passado");
    imp();
    return 0;
}

void imp(string texto) {
    cout << "\n" << texto << "\n";
}