#include <iostream>
using namespace std;

int main() {
    int n1, n2;

    n1=0;
    n2=10;

    n1=n1+1;
    // n1++;
    // n1+=1;
    // n1+=10; //-=
    cout << n1 << "\n\n";
    
    /* we can also use multiply or divide operators*/
    n2*=4;
    //n2/=2;
    cout << n2 << "\n\n";

    int n3=33;
    cout << n3-- << "\n\n";
    cout << n3 << "\n\n";

    return 0;
}