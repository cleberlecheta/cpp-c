#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void linha(int tam, string txt);

/* Biblioteca Algorithm
 * https://www.youtube.com/watch?v=tOebd4A-uCU
 */
int main() {
  vector<int> vt = {2,4,12,7,8,10,12,-8,1,3,5,6,9,11,13,2,7,2};

  for (auto x:vt) {
    cout << x << " ";
  }
  cout << "\n\n";

  //all_of = Retorna true se o teste retornar true para todos os elementos da coleção
  if (all_of(vt.begin(), vt.end(), [](int i){return i < 50;})) { //uso de função lambda
    cout << "Todos são menores que 50" << endl << endl;
  } else {
    cout << "Existe um ou mais elementos maiores que 50" << endl << endl;
  }
  
  //any_of = Retorna true se o teste retornar true para pelo menos um dos elementos da coleção
  if (any_of(vt.begin(), vt.end(), [](int i){return i > 12;})) {
    cout << "Existe um ou mais elementos maiores que 12" << endl << endl;
  } else {
    cout << "Todos são menores ou iguais a 12" << endl << endl;
  }

  //none_of = Retorna false se o teste retornar false pelo menos com um dos elementos da coleção
  if (none_of(vt.begin(), vt.end(), [](int i){return i < 0;})) {
    cout << "Todos são positivos" << endl << endl;
  } else {
    cout << "Existe um negativo" << endl << endl;
  }

  //for_each = Aplica uma função a todos os elementos da coleção
  cout << "Dobro" << endl;
  for_each(vt.begin(), vt.end(), [](int i){cout << i*2 << " ";});
  cout << "\n\n";

  //find = Procura um elemento e retorna um iterator com o resultado
  auto it = find(vt.begin(), vt.end(), 12);
  cout << *it << endl << endl;

  //find_if = Procura um elemento que atenda a uma determinada condição e retorna um iterator com o resultado
  auto it2 =  find_if(vt.begin(), vt.end(), [](int i){return ((i%2)==1);});
  cout << "Primeiro elemento impar: " << *it2 << endl << endl;

  //find_if_not = Procura um elemento que NÃO atenda a uma determinada condição e retorna um iterator com o resultado
  auto it3 =  find_if_not(vt.begin(), vt.end(), [](int i){return ((i%2)==1);});
  cout << "Primeiro elemento par: " << *it3 << endl << endl;

  //count = Quantidade de um determinado elemento na coleção
  cout << "Quantidade do numeral 2: " << count(vt.begin(), vt.end(), 2) << endl << endl;

  //count_if = Quantidade de um determinado elemento na coleção que atenda a uma condição
  cout << "Quantidade de impares: " << count_if(vt.begin(), vt.end(), [](int i){return ((i%2)==1);}) << endl << endl;

  return 0;
}
