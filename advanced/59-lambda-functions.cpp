#include <iostream>
#include <vector>

using namespace std;

/**
 * Função anônima - sem nome
 * pode ser declarada em qualquer parte do código
 * recebe uma lista de variáveis externas
 * Syntax: [variaveis](parametros){corpo da função};
 * não requer prototipagem
 */
int main() {

    /*
    auto maior = [](int n1, int n2) -> int {
        return (n1>n2) ? n1 : n2;
    };
    cout << maior(8,6) << endl;
    */

   auto maior = [](vector<int>n) -> int {
        auto m=0;
        for(int x: n) {
            m = (m>x) ? m : x;
        }
        return m;
    };
    cout << maior({8,6,10,45,32,7,100}) << endl;

    //

    int x1,x2,x3,x4;
    x1=10;
    x2=5;
    x3=2;
    x4=12;

    //auto soma = [x1,x2,x3,x4]() -> int {
    auto soma = [=]() -> int { //[=] indica que quero capturar todas as variaveis do escopo
        return x1+x2+x3+x4;
    };

    cout << soma() << endl;

    return 0;
}
