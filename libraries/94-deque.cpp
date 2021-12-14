#include <iostream>
#include <deque> //FILA DUPLA

using namespace std;

void linha(int tam, string txt);

/* Biblioteca Deque (Fila Dupla) 
 * - Implementam Iterator
 * - Pode ser acesso de ambos os lados
 * - Podemos incluir ou retirar elementos tanto do início quanto do final
 * https://www.youtube.com/watch?v=CbN_1EtqStQ
 */
int main() {
  deque<int> dq1;
  deque<int> dq2(10,5); //10 numerais cinco
  deque<int> dq3(dq2);
  deque<int> dq4={0,1,2,3,4,5,6,7,8,9};

  for (auto it=dq4.begin(); it!=dq4.end(); it++) {
    cout << *it << " ";
  }
    
  return 0;
};

void linha(int tam, string txt) {
  cout << "\n\n-- " << txt << " ";
  for (int i=0; i<tam; i++) {
    cout << "-";
  }
  cout << endl << endl;
}
