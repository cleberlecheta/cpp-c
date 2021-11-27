#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
/*
    double num;
    char numero[80];

    cin >> numero;
    num = atof(numero); //alfa para float
    num = strtod(numero,NULL); //string para double
    //atoi alfa to int
    //atol alfa to long
    //atoll alfa to long-long-int
    //astrtod, astrtof, astrtol...
    cout << num << endl;
*/

    srand(time(NULL));
    for (int i=0; i<10; i++) {
        cout << rand()%100 << endl;
    }

    //gerenciamento dinamico de memória
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