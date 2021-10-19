#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char *argv[]) {

    cout << argv[0] << "\n\n"; //nome do programa
    cout << argv[1] << "\n\n"; //primeiro argumento
    cout << argc << "\n"; //quantidade de parametros que foram passados

    if(argc > 1) {
        if (!strcmp(argv[1], "jesus")) {
            cout << "houve salvação nesta casa\n";
        }
    }

    return 0;
}