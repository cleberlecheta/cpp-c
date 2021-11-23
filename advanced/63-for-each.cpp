#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    vector<int>n{0,1,2,3,4,5,6,7,8,9};
    vector<int>::iterator it;

    //for (auto it=n.begin(); it!=n.end(); it++) { //for com base em iterator
    /* for (auto it:n) { //for com base em intervalo - o mais comum/usado
        cout << it << endl;
    };*/

    for_each(n.begin(), n.end(), [](int num) {
        num+=10; //escopo apenas dentro da função, não altera o vector inicial
        cout << num << endl;
    });

    for (auto it:n) { 
        cout << it << endl;
    };

    return 0;
}
