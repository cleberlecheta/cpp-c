#include <iostream>
#include <cstring> //string.h

using namespace std;

struct {
  char texto[40];
}obj1, obj2;


/* Manipulando strings, funções para strings, biblioteca cstring P1 */
int main() {
  char txt1[50] = "Programação em C++";
  char txt2[50] = "";
  char txt3[50] = "";

  strncpy(txt2, txt1, 4);
  cout << txt2  << endl;

  //strcpy(txt3, txt1); //atribuição direta com = é possível em string type, mas não em char
  memcpy(txt3, txt1, sizeof(txt1)+1);
  cout << txt3  << endl;

  memcpy(obj1.texto, txt1, strlen(txt1)+1);
  memcpy(obj2.texto, obj1.texto, sizeof(obj1.texto+1));
  cout << obj2.texto << endl;

  return 0;
};