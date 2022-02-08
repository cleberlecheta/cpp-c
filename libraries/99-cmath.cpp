#include <iostream>
#include <cmath>

#define PI 3.14159265

double redToGra(int a) { //convert angulo para graus
  #define PI 3.14159265
  return a*PI/180;
}

using namespace std;

/* Biblioteca cmath - evolução de math.h
 * https://www.youtube.com/watch?v=bAOUB9b4My4
 */
int main() {
  
  //Sin, Cos, Tan = Seno, Cosseno e tangente
  int ang = 45;
  cout << "Cosseno de " << ang << ".: " << cos(ang*PI/180) << endl;
  cout << "Seno de " << ang << "....: " << sin(ang*PI/180) << endl;
  cout << "Tangente de " << ang << ": " << tan(ang*PI/180) << endl;

  cout << endl;

  //asin, acos, atan = Arco seno, Arco cosseno, Arco tangente
  cout << "Arco Cosseno de " << ang << ".: " << acos(redToGra(ang)) << endl;
  cout << "Arco Seno de " << ang << ".: " << asin(redToGra(ang)) << endl;
  cout << "Arco Tangente de " << ang << ".: " << atan(redToGra(ang)) << endl;

  cout << endl;

  //atan2 = Calcula o arco tangente usando dois parâmetros representantes de X e Y
  double x = -10.0;
  double y = 10.0;
  cout << "Arco Tangente de x=-10 e Y=10: " << atan2(x,y)*180/PI << endl;

  cout << endl;

  //exp = Função exponencial
  double x2 = 10;
  cout << "O valor exponencial de " << x2 << ": " << exp(x2) << endl;

  cout << endl;

  //Log = Retorna o Logaritmo natural de um número
  double x3 = 10;
  cout << "Logaritmo natural de " << x3 << ": " << log(x3) << endl;

  cout << endl;

  //pow = Calcula a potência de um número base elevado a um expoente
  double x4 = 10;
  cout << "10 elevado a 2: " << pow(x4,2) << endl;

  cout << endl;

  //sqrt = Calcula a raiz quadrada de um número
  double x5 = 9;
  cout << "Raiz quadrada de 9: " << sqrt(x5) << endl;

  cout << endl;

  //hypot (C++11) - Retorna a hipotenusa (lado maior de um triangulo retangulo)
  double cat1, cat2;
  cat1 = 3; cat2 = 4;
  cout << "Catetos: " << cat1 << ", " << cat2 << ", Hipotenusa: " << hypot(cat1, cat2) << endl;
  //O quadrado da hipotenusa é igual a soma dos quadrados dos seus catetos
  cout << "Catetos: " << cat1 << ", " << cat2 << ", Hipotenusa: " << sqrt(pow(cat2,2)+pow(cat1,2)) << endl;

  cout << endl;

  //ceil = Arredonda para cima retornando o numeral inteiro mais próximo
  double a,b,c,d;
  a=2.2; b=3.8; c=-2.7; d=-1.2;
  cout << a << "=" << ceil(a) << "\n" << b << "=" << ceil(b) << "\n" << c << "=" << ceil(c) << "\n" << d << "=" << ceil(d) << endl;

  cout << endl;

  //floor = Arredonda para baixo retornando o numeral inteiro mais próximo
  cout << a << "=" << floor(a) << "\n" << b << "=" << floor(b) << "\n" << c << "=" << floor(c) << "\n" << d << "=" << floor(d) << endl;

  cout << endl;

  //fmod = Retorna o resto da divisão (float)
  double e,f;
  e=5.7; f=2;
  cout << fmod(e,f) << endl;

  cout << endl;

  //round = Arredonda para baixo ou para cima, conforme a regra padrão
  double g,h;
  g=5.6; h=5.4;
  cout << round(g) << endl << round(h) << endl;
  cout << rint(g) << endl << rint(h) << endl;

  cout << endl;

  //fdim (C++11) = Retorna a diferença (positiva) entre dois números
  double i,j;
  i=15; j=9;
  cout << fdim(i,j) << endl;

  cout << endl;

  //fmax (C++11) = Retorna o maior valor dentre dois
  //fmin (C++11) = Retorna o menor valor dentre dois
  double k,l;
  k=15; l=9;
  cout << fmax(k,l) << endl << fmin(k,l) << endl;

  cout << endl;

  //abs ou fabs = Arredonda o valor absoluto de numerais.
  double m,n;
  m=-15; n=-9;
  cout << fabs(m) << endl << fabs(n) << endl;

  return 0;
}
