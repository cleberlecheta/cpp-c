#include <iostream>
#include <cstdlib> //antiga stdlib.h
#include <vector>

using namespace std;

/* Funções aritiméticas
  abs - valor absoluto
  div - resto
*/
int main() {

    int n = -10;
    cout << abs(n) << endl;

    int num, den;
    div_t res;
    //ldiv_t
    //lldiv_t

    num = 10;
    den = 3;

    res = div(num, den);
    cout << num << " dividido por " << den << " = " << res.quot << " rest " << res.rem << endl;

    //ldiv - div para long int
    //llabs - long long abs C++11
    //llidv - div para long long int C++11

    //site_t usage
    size_t tam;
    vector<int> num={9,6,3,8,5,2,7,4,1,0};
    tam = num.size();
    cout << tam << endl;    

    return 0;
};