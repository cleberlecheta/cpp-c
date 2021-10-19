#include <iostream>

using namespace std;

void texto(); //prototipação da função
void soma(int a, int b);
int soma2(int n1, int n2);
void tr(string tra[4]);

int main() {
    int res;
    string transp[4]={"carro", "moto", "barco", "aviao"};

    texto(); //chamada da função
    texto();
    texto();

    soma(7, 3);
    res = soma2(15, 33);
    cout << "\n soma 2: " << res << "\n";

    tr(transp);

    return 0;
}

// implementação da função
void texto() {
    cout << "\n Obrigado Jesus!";
}

void soma(int a, int b) {
    int sum = a+b;
    cout << "\n soma: " << sum + "\n";
}

int soma2(int a, int b) {
    return a+b;
}

void tr(string tra[4]) {
    for (int i=0; i<4; i++) {
        cout << tra[i] << "\n";
    }
}
