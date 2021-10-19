#include <iostream>
using namespace std;

int main() {
    int n;

    n = 10;
    while (n < 20) {
        cout << n << "\n";
        n++;
    }

   n=20;
   do {
       cout << "\n" << n << "\n";
   } while (n < 20);
   
    cout << "\nRotina finalizada\n";

    return 0;
}