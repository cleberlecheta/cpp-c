#include <iostream>
using namespace std;

int main() {
    int tam=5;
    int vector[tam];
    int i;
    
    vector[0]=10;
    vector[1]=20;
    vector[2]=30;
    vector[3]=40;
    vector[4]=50;

    /*
    for (i=0; i<5; i++) {
        cout << vector[i] << "\n";
    }
    */
   for (i=0; i<tam; i++) {
        cout << vector[i] << "\n";
    }

    return 0;
}