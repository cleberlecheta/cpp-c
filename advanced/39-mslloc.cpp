#include <iostream>
#include <stdlib.h> //Para função malloc

using namespace std;

//Alocação dinâmica de memória
int main() {
    
    //Alocação padrão
    char vnome[50];
    cin.getline(vnome, sizeof vnome);
    cout << vnome;

    //Alocação dinâmica
    char *novoNome; //ao inves de 50 bytes terá o tamanho exato da string digitada no imput
    novoNome = (char *) malloc(sizeof(char)); //qtde de bytes que serão reservados
    cin.getline(novoNome, sizeof novoNome);
    cout << novoNome;
    
    return 0;
}