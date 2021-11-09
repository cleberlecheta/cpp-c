#ifndef AVIAO_H_INCLUDED
#define AVIAO_H_INCLUDED

class Aviao {

    public:
        int vel=0;
        int velMax;
        std::string tipo;
        Aviao(int tp); //default constructor
        void imprimir();

    private:
};

Aviao::Aviao(int tp) {
    if (tp==1) { 
        this->velMax=800;
        this->tipo="Jato";
    } else if (tp==2) { 
        this->velMax=350;
        this->tipo="Monomotor";
    } else if(tp==3) {
        this->velMax=180;
        this->tipo="Planador";
    }
}

void Aviao::imprimir() {
    std::cout << "Tipo: " << tipo << std::endl;
    std::cout << "Velocidade MAX: " << velMax << std::endl;
    std::cout << "Velocidade atual: " << vel << "\n" << std::endl;
}

#endif // AVIAO_H_INCLUDED