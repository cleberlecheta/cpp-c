#include <iostream>
#include <memory>

class Carro {
private:
    int velMax;
public:
    int potencia;
    const char* nome;

    void setVelMax(int vm) {
        this->velMax=vm;
    }

    int getVelMax() {
        return this->velMax;
    }

    // Carro(const char* nome, int p) {
    Carro(const char* n, int p):nome(n),potencia(p) { //lista de inicializacao
        // this->nome=nome;
        // this->potencia=p;
        if (p<100) {
            this->velMax = 120;
        } else if(p<200) {
            this->velMax = 220;
        }
    }
};

using namespace std;

int main() {
    unique_ptr<Carro>c1(new Carro{"Carlito", 70});
    cout << c1->nome << " - " << c1->potencia << " - " << c1->getVelMax() << endl;
    
    Carro c2({"Chevette", 89});
    cout << c2.nome << " - " << c2.potencia << " - " << c2.getVelMax() << endl;

    return 0;
}