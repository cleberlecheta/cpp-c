#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

double divide(double n1, double n2);

int main() {

    vector<int> numbers(5); //vetor de 5 posicoes

    try {
        numbers.at(6) = 10;
        cout << numbers[0] << endl;
    } catch(exception& err) {
        cout << "Erro ao executar o programa: " << err.what() << endl;
    }

    try {
        cout << "resultado da divisão: " << divide(10,0) << endl;
    } catch(const char* msg) {
        cout << msg << endl;
    }

    return 0;
}

double divide(double n1, double n2) {
    if(n2==0) {
        throw "Erro de divisão por ZERO";
    }
    return n1/n2;
}