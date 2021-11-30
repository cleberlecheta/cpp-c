#include <iostream>
#include <functional>

using namespace std;

int soma(int n1, int n2) {
  return n1+n2;
}

struct _77functional {
  int num;
  int dobro() {
    return num*2;
  }
};


int main() {
  int n1 = 10;
  const int n2 = 5;

  auto bind1 = bind(soma, n1, n2);
  cout << bind1() << endl;

  //ref -> cref criar uma referencia entre duas variaveis
  auto n3 = cref(n1);
  n1++;
  cout << n3 << endl;

  //mem_fn - acesso de uma funcao dentro de uma estrutura
  _77functional n4{33};
  auto dobro2 = mem_fn(&_77functional::dobro);
  cout << dobro2(n4) << endl;

  return 0;
};