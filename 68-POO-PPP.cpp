#include <iostream>
using namespace std;

/** Sonho moto dentro do carro 19/10/2020 */

class Veiculo {
private:
    int velMax;
    int potencia;
public:
    int rodas;
    const char* nome;
protected:
    int portas;
    const char* cor; //Usando const (CONSTANTE), a declaração não precisa estar no início do código. 
};

class Carro:public Veiculo {
    public: Carro() {
        //velMax = 180;
        //potencia = 150;
        rodas = 4;
        nome = "Carro";
        portas = 4;
        cor = "Vermelho";

        //count << velMax << endl;
        //count << potencia << endl;
        cout << rodas << endl;
        cout << nome << endl;
        cout << portas << endl;
        cout << cor << endl;
    }
};

class Moto {
public:
    Carro c;

    Moto() {
        //velMax = 180;
        //potencia = 150;
        c.rodas = 2;
        c.nome = "Moto";
        //portas = 0;
        //cor = "Azul";

        //count << velMax << endl;
        //count << potencia << endl;
        cout << c.rodas << endl;
        cout << c.nome << endl;
        // cout << portas << endl;
        // cout << cor << endl;
    }
};

int main() {
    Carro v1;
    cout << endl << endl;
    Moto v2;

    return 0;
};