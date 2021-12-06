#include <iostream>
#include <string>

using namespace std;

/* Biblioteca string P3 */
int main() {
  string john_14_6 = "Respondeu Jesus: Eu sou o caminho, a verdade e a vida. Ninguém vem ao Pai, a não ser por mim\n";

  size_t encontrado = john_14_6.find ("Jesus");
  cout << encontrado << endl; //encontro inicial da ocorrência
  
  if (encontrado != string::npos) {
    cout << "Jesus encontrado no texto" << endl;
  }

  string txt1 = john_14_6.substr(24, 9);
  cout << txt1 << endl;

  if(txt1.compare(john_14_6)==0) {
    //iguais
  } else {
    cout << "strings diferentes" << endl;
  }

  string txt2("38"),txt3;
  int ano=2021,res;
  
  /*
  stol
  stoll
  stoul
  stoull
  stof
  stod
  stold
  */
  res = ano - stoi(txt2); //string -> para inteiro
  txt3 = to_string(res); //qualquer valor -> para string
  cout << "Eu nasci! " << txt3 << endl;

  

  return 0;
};
