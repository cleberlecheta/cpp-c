#include <iostream>
using namespace std;

int n1, n2; //variaveis globais

int main() {
    //operadores matematicos: + - / * % ()

    int n3, n4; //variaveis locais
    int res, res1, res2;

    n1=11;
    n2=3;
    n3=5;
    n4=2;

    //res = (n1+n2+n3+n4)-11;
    res = n1+n2*n4;
    cout << "Soma de todas as variaveis: " << res << "\n\n";

    res1=n1/n2;
    res2=n1%n2;
    cout << "Divisao: " << res1 << "\n";
    cout << "Resto: " << res2 << "\n\n";

    return 0;
}