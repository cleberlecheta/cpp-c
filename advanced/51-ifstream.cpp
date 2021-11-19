#include <iostream>
#include <fstream>
#include <stdlib.h> //comando system
#include <list>

using namespace std;

//operação com arquivo
int main() {
    list<string> lines;

    //IFSTREAM - ler informações
    ifstream fileIn; 
    string line;
    fileIn.open("file.out"); //abre um arquivo para leitura

    if (fileIn.is_open()) {
        while(getline(fileIn, line)) {
            cout <<"file line: " << line << endl;
            lines.push_back(line);
        }
        fileIn.close();
    } else {
        cout << "File not Found! Creating it right now()...";
        system("./50-ofstream");
        system("./50-ofstream");
        system("./50-ofstream");
    };

    for (int i=0; i<lines.size(); i++) { 
        cout << "list[" << i << "] " << lines.front() << endl;
        lines.pop_front();
    }

    return 0;
}