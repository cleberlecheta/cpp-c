#include <iostream>

using namespace std;

struct Carro {
    string nome;
    string cor;
    int pot;
    int velMax;

    void inserir(string stnome, string stcor, int stpot, int stVelmax) {
        nome = stnome;
        cor = stcor;
        pot = stpot;
        velMax = stVelmax;
    }

    void mostrar() {
        cout << nome << "\n";
        cout << cor << "\n";
        cout << pot << "cv" << "\n";
        cout << velMax << "km/h" << "\n\n";
    }

    void acelerar(int mv) {
        if (mv > velMax) {
            velMax = mv;
        }
        if (mv < 0) {
            velMax=0;
        }
    }
};

int main() {

    Carro *carros=new Carro[5];
    Carro car1, car2, car3, car4, car5;

    car1.nome = "Tati Mobile";
    car1.cor = "prata ouro";
    car1.pot = 133;
    car1.velMax = 100;
    // car1.mostrar();

    car2.inserir("Bala de Prata", "prata cor", 143, 120);
    car2.acelerar(140);
    // car2.mostrar();

    carros[0] = car1; carros[1] = car2; carros[2] = car3; carros[3] = car4; carros[4] = car5;

    carros[2].inserir("Tornado", "vermelho", 450, 350);
    carros[3].inserir("Luxo", "preto", 250, 260);
    carros[4].inserir("Trabalho", "branco", 80, 120);

    for (int i=0; i<=4; i++) {
        carros[i].mostrar();
    }

    return 0;
}
