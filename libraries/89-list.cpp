#include <iostream>
#include <list>

using namespace std;

bool del(const int& value) {
  if (value == 5) {
    return true;
  }
  return false;
}

/* Biblioteca List */
int main() {
  list<int> lst1;
  list<int> lst2(10,0);
  list<int> lst3(lst2);
  list<int> lst4={1,2,3,4};
  list<int>::iterator it;

  for (auto it=lst4.begin(); it!=lst4.end(); it++) {
    cout << *it << "  ";
  }

  cout << endl;
  cout << "Tamanho: " << lst4.size() << endl;
  cout << "Capacidade máxima: " << lst4.max_size() << endl;
  cout << "Primeiro elemento: " << lst4.front() << endl;
  cout << "Último elemento: " << lst4.back() << endl;

  if (lst4.empty()) {
    cout << "Lista vazia" << endl;
  } else {
    cout << "Lista não está vazia" << endl;
  }

  //assign
  cout << endl;
  lst2.assign(10,0); //insere 10 elementos 0
  //lst2.assign(lst1.begin(), lst1.end()); //insere a lista 2 na lista 1;

  lst2.push_front(8); //tem tambem o pop para remover
  lst2.push_back(7);

  it = lst2.begin();
  ++it;
  ++it;
  //--it;
  lst2.insert(it, 5); //tem erase para remover
  lst2.remove(0); //remove todos os 0 da lista
  lst2.remove_if(del);

  lst2.sort();
  lst2.unique(); //remove elementos duplicados
  lst2.merge(lst4);
  lst2.reverse();

  for (auto x: lst2) {
    cout << x << "  ";
  }

  return 0;
};
