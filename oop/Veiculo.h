#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

class Veiculo {

    public:
        int vel;
        int tipo;
        int blind;
        int rodas;
        Veiculo();
        Veiculo(int tp);
        int getVelMax();
        bool getLigado();
        void setLigado(int l);
        void setVelMax(int vm); 
        void imp();

    private:
        int velMax;
        std::string nome;
        bool ligado;
        //void setVelMax(int vm); //nao permite alterar a velociadade externamente a classe
};

void Veiculo::imp() {
    std::cout << "Tipo veiculo: " << tipo << std::endl;
    std::cout << "Velocidade maxima: " << velMax << std::endl;
    std::cout << "Tipo veiculo: " << tipo << std::endl;
    std::cout << "Blindagem: " << blind << std::endl;
    std::cout << "-----------------------" << std::endl;
}

int Veiculo::getVelMax() {
    return velMax;
}

void Veiculo::setVelMax(int vm) {
    velMax = vm;
}

bool Veiculo::getLigado() {
    return ligado;
}

void Veiculo::setLigado(int l) {
    ligado = l;
}

Veiculo::Veiculo() {
};

Veiculo::Veiculo(int tp) {
    tipo = tp;
    if (tipo==1) { 
        nome = "Carro";
        this->velMax=200;
    } else if (tipo==2) { 
        nome = "Aviao";
        this->velMax=880;
    } else if(tipo==3) {
        nome = "Navio";
        this->velMax=120;
    } else if(tipo==4) {
        nome = "Moto";
        this->velMax=110;
    }
    setLigado(0);
};

//prototipo da classe Moto que herda todos os atributos de Veiculo
class Moto:public Veiculo {
    public:
        Moto();
};

//implementacao
Moto::Moto() {
    vel = 0;
    blind = 0;
    rodas = 2;
    tipo = 4;
    setVelMax(120);
    setLigado(true);
}


class Carro:public Veiculo {
    public:
        Carro();
};

Carro::Carro() {
    vel = 0;
    blind = 0;
    rodas = 4;
    tipo = 2;
    setVelMax(180);
    setLigado(true);
}

#endif //CLASSES_H_INCLUDED