#include <iostream>
#include <chrono>

using namespace std;
using namespace chrono;

//DATA, HORA e controle de tempo em ( C++ moderno )
int main() {
  
  minutes m(1);
  seconds s = m; //atribução válida pq unidade seconds é menor do que minutes
  // hours
  // milliseconds
  // microseconds
  // nanoseconds
  cout << s.count() << " segundos" << endl;

  minutes m2 = duration_cast<minutes>(s);
  cout << m2.count() << " minuto" << endl;

  using chrono::system_clock;
  duration<int,ratio<60*60*24>> umd_dia(1);
  system_clock::time_point hoje = system_clock::now();
  system_clock::time_point ontem = hoje - umd_dia;
  system_clock::time_point amanha = hoje + umd_dia;

  time_t tt;

  tt = system_clock::to_time_t(hoje);
  cout << "Hoje " << ctime(&tt) << endl;

  tt = system_clock::to_time_t(ontem);
  cout << "Ontem " << ctime(&tt) << endl;

  tt = system_clock::to_time_t(amanha);
  cout << "Amanhã " << ctime(&tt) << endl;

  steady_clock::time_point t1 = steady_clock::now(); //não é hora é tempo
  cout << "Imprimindo 1500 estrelinhas: " << endl;
  for (int i=0; i<1500; i++) {
    cout << "*";
  }
  cout << endl;
  steady_clock::time_point t2 = steady_clock::now();

  duration<double> tempo = duration_cast<duration<double>>(t2-t1);
  cout << "Tempo de trabalho: " << tempo.count() << " segundos" << endl;

  return 0;
};