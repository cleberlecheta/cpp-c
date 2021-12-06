#include <iostream>
#include <string>

using namespace std;

/* Biblioteca string P1 */
int main() {
  string txtMt7_13("Entrem pela porta estreita, pois larga é a porta e amplo o caminho que leva à perdição, e são muitos os que entram por ela.");
  string txtMt7_14("Como é estreita a porta, e apertado o caminho que leva à vida! São poucos os que a encontram");

  string::iterator it;
  it=txtMt7_13.begin(); //iterator apontando para o início da string
  cout << *it << endl;
  //rbegin - reverso - aponta para o fim
  //rend - resevero - aponta para o inicio

  cout << txtMt7_13.size() << endl;
  cout << txtMt7_13.length() << endl;

  cout << txtMt7_14.max_size() << endl;
  cout << txtMt7_14.size() << endl;
  txtMt7_14.resize(10); //string redimencionada
  cout << txtMt7_14.length() << endl;
  
  txtMt7_14.clear();
  if (txtMt7_14.empty()) {
    cout << "String vazia" << endl;
  }
  cout << txtMt7_14.capacity() << endl; //sempre o maior valor que ja foi usado para a string
  txtMt7_14.shrink_to_fit();
  cout << txtMt7_14.capacity() << endl; 



  return 0;
};
