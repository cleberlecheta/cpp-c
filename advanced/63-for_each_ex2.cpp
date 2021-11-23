#include <iostream>
#include <memory>

class Carro {
    public:
    int vel=0;
    int getVel() {
        return vel;
    }
    void setVel(int v) {
        this->vel=v;
    }
};

using namespace std;

int main() {
    //deletan o objeto apontado automaticamente após o termino da utilização

    //int *pnum = new int();
    unique_ptr<int> pnum(new int());
    *pnum=10;
    cout << *pnum << " - " << &pnum << endl;
    //delete pnum;

    //string* str=new string("aprendendo C");
    unique_ptr<string>str(new string("aprendendo C++"));
    cout << *str << " - tamanho:" << str->size() << endl;
    //delete str;

    //Carro *c1=new Carro();
    unique_ptr<Carro>c1(new Carro);
    c1->setVel(10);
    cout << "velocidade: " << c1->getVel() << endl;
    //delete c1;
    
    return 0;
}