#include <iostream>

using namespace std;

//declaração das funções
void thanks();
void printSoma(int a, int b);
int soma(int n1, int n2);
void transportes(string tra[4]);

int main() {
    int res;
    string transp[4]={"carro", "moto", "barco", "aviao"};

    thanks(); //chamada da função
    thanks();
    thanks();

    printSoma(7, 3);
    res = soma(15, 33);
    cout << "\n resultado da soma: " << res << "\n";

    transportes(transp);

    return 0;
}

// implementação das funções
void thanks() {
    cout << "Obrigado Jesus!\n";
}

void printSoma(int a, int b) {
    int sum = a+b;
    cout << "\n soma: " << sum + "\n";
}

int soma(int a, int b) {
    return a+b;
}

void transportes(string tra[4]) {
    for (int i=0; i<4; i++) {
        cout << tra[i] << "\n";
    }
}
