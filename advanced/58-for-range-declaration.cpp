#include <iostream>

using namespace std;

int main() {
    int x[10]{0,1,2,3,4,5,6,7,8,9};

    // for(int i=0; i<sizeof(x)/4; i++) {
    //     cout << x[i] << endl;
    // }

    for(int i: x) { //possivel declarar i como auto também
        cout << i << endl;
    }

    return 0;
}
