#include <iostream>
#include <cmath>
#include <ctime> //time.h

using namespace std;

int numeros_primos(int n) {
    int i,j;
    int freq=n-1;
    for (i=2; i<=n; i++) {
      for (j=sqrt(i); j>1; --j) {
        if(i%j == 0) {
          --freq;
          break;
        }
      }
    }
    return freq;
}

//Manipulando DATA, HORA e controle de tempo em C++
int main() {
  int primos;
  clock_t t1, t2, t3;

  t1=clock();
  primos=numeros_primos(999999);
  //t2=clock()-t1;
  t2=clock();
  t3=difftime(t2,t1);

  cout << "Qtde de primos: " << primos << endl;
  cout << "Tempo de CPU: " << ((float)t3)/CLOCKS_PER_SEC << " segundos \n" << endl;

  //tempo e hora local
  time_t tempo;
  struct tm *infoTempo;  

  time(&tempo);
  cout << tempo << " segundos desde 00:00 de 1 de Janeiro de 1970" << endl;

  infoTempo=localtime(&tempo);
  cout << asctime(infoTempo) << endl;
  cout << infoTempo->tm_hour << " hora" << endl;
  cout << infoTempo->tm_min << " minutos" << endl;
  cout << infoTempo->tm_sec << " segundos \n" << endl;
  
  cout << ctime(&tempo) << endl; //usando ctime eu não preciso da struct tm

  //Formatar data e hora
  char buffer[80];
  strftime(buffer, 80, "Dia: %d/%m/%Y Hora: %I:%M", infoTempo);
  cout << buffer << endl;

  return 0;
};