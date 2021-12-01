#include <iostream>
#include <cctype> //ctype.h

using namespace std;

/* Como verificar o tipo de um caractere em c++, biblioteca cctype
 * isalnum
 * isalpha
 * isspace
 * iscntrl - \n
 * isdigit - verifica se é numerico
 * islower
 * isupper
 * isprint
 * ispunct - ,.?
 * isxdigt - hexadecimal
 */
int main() {
  char str[] = "Jesus Salva";
  char c;
  int i, count;

  i=0;
  count=0;
  while (str[i]) { //isalnum(str[i])
    if (isalpha(str[i])) {
      cout << "Caractere " << str[i] << " é alfabético" << endl;
    } else {
      cout << "Caractere " << str[i] << " NÃO é alfabético" << endl;//espaço não é alfabumérico
    }

    if (isspace(str[i])) {
      count++;
    }

    c=str[i];
    putchar(toupper(c)); //tolower

    i++;
  }
  //cout << "Os " << i << " primeiros caracteres são alfanuméricos"; //espaço não é alfabumérico

  return 0;
};