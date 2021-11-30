#include <iostream>
#include <typeinfo> //biblioteca para informações de tipos

using namespace std;

int main() {
  auto num = 10.5;
  cout << "Tipo de num: " << typeid(num).name() << endl;

  if(typeid(int).before(typeid(char))) {
    cout << "int vem antes de char" << endl;
  } else {
    cout << "char vem antes de int" << endl;
  }

  return 0;
};