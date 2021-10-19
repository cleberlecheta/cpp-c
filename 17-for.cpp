#include <iostream>
using namespace std;

int main() {
    int x, y;

    for (x=0; x <3; x++) {
        cout << x+1 << " dia" << "\n";
    }
    cout << "Ressucitou!" << "\n\n";

    //laço utilizando varios comandos dentro do for
    for (x=0, y=1; x <= 10; x++, y+=2) {
        cout << x << " - " << y << "\n";
    }
    
    cout << "\nRotina finalizada\n";

    return 0;
}