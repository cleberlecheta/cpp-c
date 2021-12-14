#include <iostream>
#include <map>

using namespace std;

/* Biblioteca Map */
int main() {
  map<int, string> faixasJiuJitsu;
  map<int, string>::iterator it;

  faixasJiuJitsu[0]="Branca";
  faixasJiuJitsu[1]="Azul";
  faixasJiuJitsu[2]="Roxa";
  faixasJiuJitsu[3]="Marrom";
  faixasJiuJitsu[4]="Preta";

  cout << "Faixas no Jiu-Jitsu: " << endl;
  for (auto x:faixasJiuJitsu) {
    cout << x.first << " - " << x.second << endl;
  }
  cout << endl;

  //Capacidade

  cout << faixasJiuJitsu.size() << endl;
  cout << faixasJiuJitsu.max_size() << endl;
  cout << endl;

  //Acesso aos elementos
  cout << faixasJiuJitsu[0] << " -> " << faixasJiuJitsu[1] << endl;
  cout << faixasJiuJitsu.at(2) << " - > " << faixasJiuJitsu.at(3) << endl;
  cout << endl;

  //Modificadores
  map<int, string> map2;
  map<int, string> map3;

  map2.insert(pair<int, string>(10, "Limão"));
  map2.insert(pair<int, string>(20, "Laranja"));
  map2.insert(pair<int, string>(30, "Abacaxi"));
  map2.insert(pair<int, string>(40, "Abacate"));
  map2.insert(pair<int, string>(50, "Goiaba"));

  it=map2.find(30);
  map2.erase(it);
  
  for (auto x: map2) {
    cout << x.first << " - " << x.second << endl;
  }
  cout << endl;

  map3.swap(map2);
  map2.emplace_hint(map2.end(),60,"Morango");
    for (auto x: map2) {
    cout << x.first << " - " << x.second << endl;
  }

  if (map3.empty()) {
    cout << "MAP3 está vazio" << endl;
  } else {
    cout << "MAP3 - NÃO está vazio" << endl;
  }

  map2.clear();
  if (map2.empty()) {
    cout << "MAP2 está vazio" << endl;
  } else {
    cout << "MAP2 - NÃO está vazio" << endl;
  }
  cout << endl;

  //Operações
  if(map3.count(40)!=0) {
    cout << "Chave 40 está no map" << endl;
  }
  
  return 0;
};
