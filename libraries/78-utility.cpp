#include <iostream>
#include <utility>

using namespace std;

//Função SWAP, função MAKE_PAIR e o tipo PAIR
int main() {

  int a,b;
  a=10;
  b=5;

  //swap - inversão de valores entre variaveis
  cout << "Valor de a: " << a << " Valor de b: " << b << endl;
  swap(a,b);
  cout << "Valor de a: " << a << " Valor de b: " << b << endl;

  //PAIR
  pair<int, int> p1;
  pair<int, char> p2;

  p1=make_pair(10,5);
  p2=make_pair(1, 'B');
  cout << "Par 1: " << p1.first << " - " << p1.second << endl;
  cout << "Par 2: " << p2.first << " - " << p2.second << endl;

  return 0;
};