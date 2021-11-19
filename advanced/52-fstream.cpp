#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

//operação com arquivo
int main() {

    //FSTREAM
    fstream file;
    char opt='s';
    string name;

    //file.open("file.out",ios::out); //abre o arquivo no modo escrita/saída
    file.open("file.out",ios::app); //abre o arquivo no modo append
    while ((opt == 's') or (opt == 'S')) {
        cout << "Nome por-favor: ";
        cin >> name;
        file << name << "\n";

        cout << "Adicionar novo? [s/n]";
        cin >> opt;
        system("clear");
    };
    file.close();

    file.open("file.out",ios::in); //abre o arquivo no modo leitura/entrada
    string line;
    if (file.is_open()) {
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    }

    return 0;
}