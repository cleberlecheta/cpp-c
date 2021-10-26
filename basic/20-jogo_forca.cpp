#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    char palavra [30], letra[1], secreta[30];
    int tam, i, chances, acertos;
    bool acerto;

    chances=6;
    tam=0;
    i=0;
    acerto=false;
    acertos=0;

    cout << "digite a palavra secreta: ";
    cin >> palavra;
    system("clear");

    while (palavra[i] != '\0') { // \0 é o caracter do enter, fim da string
        i++;
        tam++;
    }
    
    for (i=0; i<30; i++) {
        secreta[i]= '-';
    }

    //rotina do jogo
    while((chances > 0) && (acertos < tam)) {
        cout << "Chances restantes: " << chances << "\n\n";
        cout << "Palavra secreta: ";
        for (i=0; i<tam; i++) {
            cout << secreta[i];
        }

        cout << "\n\n Digite uma letra: ";
        cin >> letra[0];
        for(i=0; i<tam; i++) {
            if (palavra[i] == letra[0]) {
                acerto==true;
                secreta[i] = palavra[i];
                acertos++;
            }
        }
        if (!acerto) {
            chances--;
        }

        acerto=false;
        system("clear");
    }

    if (acertos==tam) {
        cout << "Você venceu!";
    } else {
        cout << "Que pena, tente novamente!";
    }
    
    return 0;
}