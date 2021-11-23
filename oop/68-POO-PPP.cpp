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

class Carro:public Veiculo { //Carro herda a classe Veículo
    public: Carro() {
        //velMax = 180; //private - não pode ser acessado diretamente
        //potencia = 150; //private - não pode ser acessado diretamente
        rodas = 4;
        nome = "Carro";
        portas = 4; //protected - acessível por herança
        cor = "Vermelho"; //protected - acessível por herança

        //count << velMax << endl;
        //count << potencia << endl;
        cout << rodas << endl;
        cout << nome << endl;
        cout << portas << endl;
        cout << cor << endl;
    }
};

class Moto { //Não herda de ninguém
public:
    Carro c; //acesso apenas aos atributos públicos - protected e private não podem estar acessíveis

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