#include <iostream>

using namespace std;

//extern é a palavra reservada para definir o escopo e evitar a duplicação de variáveis
extern int num;

void impNum() {
    cout << num << endl;
};
