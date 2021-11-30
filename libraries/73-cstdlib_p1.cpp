#include <iostream>
#include <cstdlib> //antiga stdlib.h
#include <ctime>

using namespace std;

int main() {
/*  Funções de conversão de tipo

    double num;
    char numero[80];

    cin >> numero;
    num = atof(numero); //alfa para float ou doble
    num = strtod(numero,NULL); //string para double
    //atoi alfa to int
    //atol alfa to long
    //atoll alfa to long-long-int
    //astrtod, astrtof, astrtol...
    cout << num << endl;
*/

    //Função de geração de número aleatório
    srand(time(NULL)); //necessaŕio para o rand retorno sempre valores diferences a cada execução
    for (int i=0; i<10; i++) {
        cout << rand()%100 << endl; //aletario de 0 a 100
    }

    /* Funções de gerenciamento dinamico de memória
      calloc malloc free realloc */
    int tam=10, num;
    int *vector;

    //vector = (int*)calloc(tam,sizeof(int));
    vector = (int*)malloc(sizeof(int)); //retorna o ponteiro para o primeiro elemento
    for (int i=0; i<tam; i++) {
        vector[i] = rand()%100;
        cout << vector[i] << endl;
    }

    free(vector);

    return 0;
};