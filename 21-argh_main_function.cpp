#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char *argv[]) {

    cout << "quantidade de parametros que foram passados: " << argc << "\n";
    cout << argv[0] << "\n"; //defaults to (nome do programa)
    cout << argv[1] << "\n"; //primeiro argumento

    if(argc > 1) {
        if (!strcmp(argv[1], "Jesus")) {
            cout << "\nHoje houve salvação nesta casa! ";
        }
    }

    return 0;
}