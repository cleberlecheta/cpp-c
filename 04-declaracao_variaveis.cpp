#include <iostream>

using namespace std;

int main() {
    //TIPO NOME;
    //TIPO NOME = VALOR;

    int vidas = 1;
    char letra = 'A';
    char letras[20];
    double decimal = 3.3;
    float decimal2 = 3.6; //precisao menor do que double
    bool vivo = true;
    string nome = "Cleber, filho amado!";

    cout << "Digite o numero de vidas: ";
    cin >> vidas;
    cout << "Digite uma letra: ";
    cin >> letra;
    cout << "Digite seu nome: ";
    cin >> nome;
    
    cout << vidas << "\n";
    cout << letra << "\n";
    cout << decimal << "\n";
    cout << decimal2 << "\n";
    cout << vivo << "\n";
    cout << nome << "\n";

    return 0;
}