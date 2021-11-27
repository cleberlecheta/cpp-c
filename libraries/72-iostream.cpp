#include <iostream> 
/** comandos de entrada e saída básicos 
 * - cin
 * - cout
 * - 
*/

using namespace std;

int main() {
    int idade;
    string nome;

    cin >> nome >> idade;
    cout << nome << " - " << idade << endl;

    char nome2[80]; //ou char *nome2;
    cin.get(nome2, 80); //le caractere por caractere, leitura de arquivo melhor usar getline()
    cout << nome2 << " - " << cin.gcount() << endl;

    char n,s;
    n = cin.get(); //primeira letra do nome
    cin.ignore(80, ' '); //ignorar pontos, epaços ou qualquer outro caractere
    s=cin.get(); //primeira letra do sobrenome
    cout << n << " - " << s << endl;

    return 0;
};