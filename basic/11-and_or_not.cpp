#include <iostream>
using namespace std;

int main() {
    int num;

    num = 17;

    if ( (num >=3 && num <= 6) || (num > 15 && num < 20)) {
        cout << "\n\nValor aceito\n";
    } else {
         cout << "\n\nNao aceito\n";
    }

    int num2 = 0;
    if (!num2) {
        cout << "\n\nFicar em casa estudando\n";
    }

    return 0;
}