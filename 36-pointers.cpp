#include <iostream>

using namespace std;

void somar(float *var, float valor);
void initVetor(float *v);

int main() {

    //Aula 36

    string veiculo = "Carro";

    string *pv; //pointeiro, armazena o endereco de memoria de outra variavel
    pv = &veiculo;

    cout << pv << "\n" << *pv << "\n\n";

    *pv = "Moto";

    cout << pv << "\n" << *pv << "\n\n";

    //Aula 37

    int *p;
    int vetor[10];
    
    p=vetor; //p=&vetor[0];
    *p=10;
    cout << p << "\n" << *p << "\n";

    *(p+=1);
    *p=20;
    p=&vetor[1];
    cout << p << "\n" << *p << "\n";

    *(p+=1);
    *p=30;
    cout << p << "\n" << *p << "\n\n";

    //Aula 38
    float num = 0;
    float vet[5];

    somar(&num, 15);
    initVetor(vet); //com vetores nao preciso utilizar &, ele ja e considerado um endereco de memoria

    cout << num << "\n\n";
    for (int i=0; i<5; i++) {
        cout << vet[i] << "\n";
    }

    return 0;
}

void somar(float *var, float valor) {
    *var += valor;
}

void initVetor(float *v) {
    v[0]=5;
    v[1]=5;
    v[2]=5;
    v[3]=5;
    v[4]=5;
}