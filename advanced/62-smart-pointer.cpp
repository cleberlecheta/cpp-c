#include <iostream>
#include <memory>

using namespace std;

/**
 * Assegura a liberação da memória
 */
int main() {

    /* ponteiro tradicional
    int *pnum;
    int num;

    num=10;
    pnum=&num;
    */

    /* melhoria na forma de declarar 
    int *pnum = new int(); */
    
    //Smart pointer
    unique_ptr<int> pnum(new int());

    *pnum = 10;

    cout << *pnum << " - " << &pnum << endl;

    return 0;
}
