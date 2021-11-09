#include <iostream>
#include <stdlib.h> //comando system

using namespace std;

int main() {
    cout << "Arquivos C++ de aprendizado do curso:\n" << endl;
    system("ls *.cpp"); //executa um comando do sistema operacional
    
    return 0;
}