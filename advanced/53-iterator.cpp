#include <iostream>
#include <vector>

using namespace std;

//navegar entre os itens de uma coleção
int main() {
    vector<string> products = {"mouse", "teclado", "monitor", "gabinete", "cx.som"};
    vector<string>::iterator it;

    /* didint work as expected
    it = products.begin();
    cout << *it << endl;

    advance(it, 1);
    cout << *it << endl;

    next(it,2);
    cout << *it << endl;

    prev(it,3);
    cout << *it << endl;
    */

     for(it=products.begin(); it!=products.end(); it++) {
         cout << *it << endl;
     }

    return 0;
}