#include <iostream>
#include <cstdlib> //antiga stdlib.h

using namespace std;

void fim() {
    cout << "Obrigado por participar" << endl;
}

int comparacao(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int vetor[]={9,1,8,2,7,3,6,4,5,0};
    int pesq = 7;
    int *pos;

    qsort(vetor,10,sizeof(int),comparacao); //ordena o array
    for (int i=0; i<10; i++) {
        cout << vetor[i] << endl;
    }

    pos = (int*) bsearch(&pesq,vetor,10,sizeof(int),comparacao); //pesquisa elemento
    cout << "Elemento " << pesq << " esta na posicao " << *pos << endl; //valor
    //cout << "Elemento " << pesq << " esta na posicao " << pos << endl; //end de memoria

    const char* p;
    p=getenv("PATH"); //capturar variável de ambiente
    cout << p << endl;

    atexit(fim); //at_quick_exit
    for (int i=0; i<10; i++) {
        if (i<5) {
            cout << i << endl;
        } else {
            exit(EXIT_SUCCESS); //encerramento do programa
            cout << i << endl;
        }
    }

    system("clear"); //roda um programa do SO

    return 0;
};