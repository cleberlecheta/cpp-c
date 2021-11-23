#include <iostream>

class Carro {
private:
    int velMax;
    const char* nome;
public:
    int potencia;

    int getVelMax() {
        return this->velMax;
    }

    const char* getNome() {
        return nome;
    }

    //sobrecarga de métodos

    Carro() {
        velMax=160;
        potencia=73;
        nome="Carlito";
    }

    Carro(int pt, const char* no):potencia(pt),nome(no) { //lista de inicializacao
        if (pt<100) {
            velMax=120;
        } else if (pt<200) {
            velMax=240;
        } else if (pt<100) {
            velMax=360;
        }
    }
};

using namespace std;

//Vários métodos com o mesmo nome e que podem fazer coisas diferentes, alterando a lista de parametros
int main() {
    Carro c1;
    cout << c1.getNome() << " - " << c1.potencia << " - " << c1.getVelMax() << endl;
    
    Carro c2{180, "esportivo"};
    cout << c2.getNome() << " - " << c2.potencia << " - " << c2.getVelMax() << endl;

    return 0;
}