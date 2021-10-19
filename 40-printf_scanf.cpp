#include <iostream>
#include <stdio.h>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {

    printf("Olá Mundo! \0 acabou aqui a string");

    /*
        d ou i => int
        x,X => Hexadecimal
        u => int sem sinal
        s => string, char*
        f => double
        p => ponteiros
    */
    int num1=123;
    printf("\n valor da variavel: %d", num1);

    //scanf("%d", &num1);
    //printf("\n novo valor da variavel: %d", num1);

    //Aula 41
    float pi = M_PI;
    printf("\n Valor de PI: %.2f", pi);

    cout.precision(30);
    cout << "\n Valor de PI: " << pi;

    cout.precision(-1); //volta a precisao normal
    cout << "\n Valor de PI: " << pi;
    cout << "\n Valor de PI scientific: " << std::scientific << pi;

    int num = 10;
    printf("\n Valor de NUM: %07d", num);

    cout << "\n Valor de NUM: " << setw(10) << setfill('1') << num;
    cout << "\n Valor de NUM em dec: " << num;
    cout << "\n Valor de NUM em hex: " << hex << num; //hex, oct, dec

    return 0;
}