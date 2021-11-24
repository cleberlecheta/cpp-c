#include <iostream>
#include <locale.h> //<locale> também deve funcionar

using namespace std;

int main() {

    setlocale(LC_ALL, "portuguese");
    cout << "É possível comer maça com banana" << endl;

    return 0;
};