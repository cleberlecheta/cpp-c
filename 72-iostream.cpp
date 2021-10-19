#include <iostream>

using namespace std;

int main() {
    int idade;
    string nome;

    cin >> nome >> idade;
    cout << nome << " - " << idade << endl;

    char nome2[80];
    cin.get(nome2, 80); //le caractere por caractere, leitura de arquivo melhor usar getline()
    cout << nome2 << " - " << cin.gcount() << endl;

    char n,s;
    n = cin.get(); //primeira letra do nome
    cin.ignore(80, ' ');
    s=cin.get(); //primeira letra do sobrenome
    cout << n << " - " << s << endl;

    return 0;
};