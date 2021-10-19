#include <iostream>
using namespace std;

int main() {
    int num1=10;
    int num2=50;
    char opc='s';

    int sol=1; //0 ou 1 funcionam como valores boleanos no C

    if (sol) {
        cout << "Obrigado Jesus por nos livrar dos estragos do corona virus";
    }

    if (num1 < num2) {
        cout << "resultado verdadeiro";
    } else {
        cout << "falso";
    }

    return 0;
}