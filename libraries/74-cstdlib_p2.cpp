#include <iostream>
#include <cstdlib>

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

    pos = (int*) bsearch(&pesq,vetor,10,sizeof(int),comparacao);
    cout << "Elemento " << pesq << " esta na posicao " << pos << endl;

    const char* p;
    p=getenv("PATH");
    cout << p << endl;

    atexit(fim); //at_quick_exit
    for (int i=0; i<10; i++) {
        if (i<5) {
            cout << i << endl;
        } else {
            exit(EXIT_SUCCESS);
            cout << i << endl;
        }
    }

    system("clear");

    return 0;
};