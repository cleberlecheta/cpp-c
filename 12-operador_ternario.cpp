#include <iostream>
using namespace std;

int main() {
    int n1, n2, nota;
    string res;

    /*
    cout << "Digite a primeira nota: ";
    cin >> n1;
    cout << "Digite a segunda nota: ";
    cin >> n2;

    nota = n1 + n2;

    //armazenando valor
    (nota >= 60) ? res="Aprovado" : res="Reprovado";

    //retornando o valor
    res = (nota >=60) ? "Aprovado" : "Reprovado";

    cout << "\nsituacao: " << res << "\n";
    */

    int x = 5;
    cout << "Digite um valor: ";
    cin >> n1;
    (n1 >= 10) ? x++ : x--;

    cout << "\nNovo valor do X: " << x << "\n";

    return 0;
}