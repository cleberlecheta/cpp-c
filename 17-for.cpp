#include <iostream>
using namespace std;

int main() {
    int x, y;

    for (x=0, y=1; x <= 10; x++, y+=2) {
        cout << x << " - " << y << "\n";
    }
    
    cout << "\nRotina finalizada\n";

    return 0;
}