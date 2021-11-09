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

    private:
        int velMax;
        std::string nome;
        bool ligado;
        void setVelMax(int vm);
};

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

Veiculo ::Veiculo() {
};

Veiculo ::Veiculo(int tp) {
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

class Moto:public Veiculo {

    public:
        Moto();

};

Moto::Moto() {
    Veiculo(4);
}

#endif