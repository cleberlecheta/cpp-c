#include <iostream>
#include <iomanip>

using namespace std;

/* Biblioteca iomanip - manipulação de sáida
 * https://www.youtube.com/watch?v=vNbWKn5maDU
 */
int main() {
  
  //setbase = base: decimal, hexadecimal, octal
  cout << setbase(16);
  cout << "10 em base 16: " << 10 << endl;
  cout << setbase(10);
  cout << "10 em base decimal: " << 10 << endl << endl;

  //setw = largura do campo
  cout << setw(20);
  cout << "Jesus";
  cout << setw(10);
  cout << "te";
  cout << setw(40);
  cout << "ama++" << endl << endl;

  //setfill = Preenchimento de campo
  cout << "Jesus " << setw(20) << setfill('.') << " o caminho, a verdade e a vida!" << endl << endl;

  //setprecision = Precisão de valores de float e double, casas decimais
  double pi = 3.14159;
  cout << setprecision(3) << pi << endl << endl;

  return 0;
}
