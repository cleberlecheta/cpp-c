#include <iostream>
using namespace std;

int main() {

    int num = 10;
    cout << num << "\n\n";

    //num = num * -1;
    //cout << -num << "\n\n"; //does not assign the changes to the variable, just use it once

    num = -num;
    cout << num << "\n\n";

    return 0;
}