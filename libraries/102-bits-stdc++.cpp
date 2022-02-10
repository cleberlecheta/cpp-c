#include <iostream>
#include <bits/stdc++.h>

using namespace std;

/* Biblioteca bits/stdc++.h - um include que inclui todas as bibliotecas padrões
 * https://www.youtube.com/watch?v=BAH89SZU_O4
 */
int main() {
  
  //bibliteca utility (sem include)
  pair<int, int> par;
  par = make_pair(10, 5);
  cout << par.first << " - " << par.second << endl << endl;

  //biblioteca vector (sem include)
  vector<int> vt = {1,3,5,7,9};
  for (auto x: vt) {
    cout << x << " - ";
  }
  cout << endl << endl;

  //biblioteca cmatch (sem include)
  double x = 10;
  cout << pow(x, 2) << endl;
  
  fstream f;
  f.open("102-bits.txt", fstream::in|fstream::out|fstream::app);
  f << "Siga o caminho!" << endl;
  f.close();

  return 0;
}
