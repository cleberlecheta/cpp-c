#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/* Biblioteca Algorithm - para trabalhar com coleções
 * https://www.youtube.com/watch?v=QqYs-XygSiQ
 */
int main() {
  vector<int> vt1 = {1,4,7,2,5,8,3,6,9,0};
  vector<int> vt2 = {1,4,7,2,5,8,3,6,9,0};
  vector<int> vt3 = {0,1,2,3,4,5,6,7,8,9};
  vector<int> vt4 = {2,3,3,4,5,5,5,6};
  vector<int> vt5 = {10,11,12};
  vector<int>::iterator it;

  //replace_if = Substitui valores da coleção que atendam a determinada condição
  cout << "replace_if" << endl;
  replace_if(vt1.begin(), vt1.end(), [](int i){return i<5;}, 10);
  for (auto x: vt1) {
    cout << x << " ";
  }

  cout << "\n\n";

  //fill = Preenche uma coleção com um valor especificado
  cout << "fill" << endl;
  fill(vt2.begin(), vt2.end(), 10);
  for (auto x: vt2) {
    cout << x << " ";
  }

  cout << "\n\n";

  //remove = Remove um valor indicado da coleção
  cout << "remove" << endl;
  int qtde = count(vt3.begin(), vt3.end(), 2); //conta quantos numerais 2 existem na coleção
  remove(vt3.begin(), vt3.end(), 2); //remove todos os elementos 2
  vt3.resize(vt3.size()-qtde); //redimensiona a coleção após exclusão
  vt3.shrink_to_fit();
  for (auto x: vt3) {
    cout << x << " ";
  }

  cout << "\n\n";

  //unique = Remove elementos duplicados (consecutivos) na coleção
  cout << "unique" << endl;
  it = unique(vt4.begin(), vt4.end());
  vt4.resize(distance(vt4.begin(), it)); 
  for (auto x: vt4) {
    cout << x << " ";
  }

  cout << "\n\n";

  //reverse = inverte a ordem dos elementos
  cout << "reverse" << endl;
  reverse(vt5.begin(), vt5.end());
  for (auto x: vt5) {
    cout << x << " ";
  }

  cout << "\n\n";

  //is_sorted
  cout << "is_sorted" << endl;
  if (is_sorted(vt1.begin(), vt1.end())) {
    cout << "Ordenada";
  } else {
    cout << "Coleção NÃO ordenada";
  }

  cout << "\n\n";

  //sort = Ordena os elementos da coleção
  cout << "sort" << endl;
  sort(vt1.begin(), vt1.end());
  for (auto x: vt1) {
    cout << x << " ";
  }

  cout << "\n\n";

  //is_sorted
  cout << "is_sorted" << endl;
  if (is_sorted(vt1.begin(), vt1.end())) {
    cout << "Agora está ORDENADA";
  } else {
    cout << "Coleção NÃO ordenada";
  }

  cout << "\n\n";

  cout << "merge" << endl;
  vector<int>vt6(20);
  merge(vt2.begin(), vt2.end(), vt3.begin(), vt3.end(), vt6.begin());
  for (auto x: vt6) {
    cout << x << " ";
  }

  cout << "\n\n";

  //set_union = União de duas coleções (igual ao merge)
  cout << "set_union" << endl;
  vector<int>vt7(20);
  set_union(vt4.begin(), vt4.end(), vt5.begin(), vt5.end(), vt7.begin());
  for (auto x: vt7) {
    cout << x << " ";
  }
  
  cout << "\n\n";

  cout << "set_intersection" << endl; // elementos comuns aos dois
  vector<int>vt8(10);
  set_intersection(vt6.begin(), vt6.end(), vt7.begin(), vt7.end(), vt8.begin());
  for (auto x: vt8) {
    cout << x << " ";
  }

  cout << "\n\n";

  cout << "set_difference" << endl; // a diferença da primeira coleção em relação à segunda
  vector<int>vt9(10);
  set_difference(vt6.begin(), vt6.end(), vt7.begin(), vt7.end(), vt9.begin());
  for (auto x: vt9) {
    cout << x << " ";
  }

  cout << "\n\n";

  cout << "min e max" << endl;
  int n1,n2;
  n1=10;
  n2=5;
  cout << "menor: " << min(n1, n2) << endl;
  cout << "maior: " << max(n1, n2);

  cout << "\n\n";

  cout << "minmax" << endl; //Retorna o menor e maior valores dentre vários
  int n3,n4,n5,n6,n7,n8;
  n3=10; n4=5; n5=10; n6=3; n7=8, n8=9;
  auto res = minmax({n3,n4,n5,n6,n7,n8});
  cout << "Menor: " << res.first << " Maior: " << res.second;

  cout << "\n\n";

  cout << "mim_element, max_element, minmax_element" << endl;
  vector<int> vt10 = {5,4,10,30,12,15,8,7};
  // vector<int>::iterator it1, it2;
  // it1 = min_element(vt10.begin(), vt10.end());
  // it2 = max_element(vt10.begin(), vt10.end());
  // auto res2 = minmax_element(vt10.begin(), vt10.end());

  // cout << "Menor: " << *it1 << " Maior: " << *it2 << endl;
  // cout << "Menor: " << *res2.first << " Maior: " << *res2.second;

  return 0;
}
