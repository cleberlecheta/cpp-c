#include <iostream>
#include <memory>

class Carro {
public:
    int velMax;
    int potencia;
    const char* nome;

    // Carro(const char* nome, int p) {
    Carro(const char* n, int p):nome(n),potencia(p) { //lista de inicializacao - para não precisar usar new
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
    //Carro c1{"Carlito", 70};
    unique_ptr<Carro>c1(new Carro{"Carlito", 85});
    cout << c1->nome << " - " << c1->potencia << " - " << c1->velMax << endl;

    Carro c2{"Ventania", 400};
    cout << c2.nome << " - " << c2.potencia << " - " << c2.velMax << endl;
    
    return 0;
}