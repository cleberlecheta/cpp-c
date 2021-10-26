#include <iostream>

using namespace std;

void somar(float *var, float valor);
void initVetor(float *v);

//pointeiro, armazena o endereco de memoria de outra variavel
int main() {

    //Aula 36

    string veiculo = "Carro";

    string *pv; //para declarar um ponteiro, tipo *variavel (acrescentar * em frente ao nome da variavel)
    pv = &veiculo; //& comercial é o operador de endereço utilizado para fazer a atribução

    //quando eu acesso utilizando o * eu utilizo o valor que está no endereço do ponteiro
    cout << pv << "\n" << *pv << "\n\n";

    *pv = "Moto";

    cout << pv << "\n" << *pv << "\n\n";

    //Aula 37 - manipulando arrays atraves de pointeiros

    int *p;
    int vetor[10];
    
    p=vetor; //p=&vetor[0]; mesma coisa
    *p=10;
    cout << p << "\n" << *p << "\n";

    *(p+=1); //incremento para a próxima posição
    *p=20;
    p=&vetor[1];
    cout << p << "\n" << *p << "\n";

    *(p+=1);
    *p=30;
    cout << p << "\n" << *p << "\n\n";

    //Aula 38 - associação de ponteiros com funções
    //https://www.youtube.com/watch?v=TYFlzcRmNRY&list=PLx4x_zx8csUjczg1qPHavU1vw1IkBcm40&index=38&ab_channel=CFBCursos
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