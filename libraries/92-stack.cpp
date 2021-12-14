#include <iostream>
#include <stack> //LIFO (Last-In-FIrst-Out)

using namespace std;

/* Biblioteca Stack (Pilha) */
int main() {
  stack<int> pilha1, pilha2;

  pilha1.push(10);
  pilha1.push(20);
  pilha1.push(30);
  pilha1.push(40);
  pilha1.push(50);

  cout << "Numero de elementos da pilha " << pilha1.size() << endl;

  while (!pilha1.empty()) {
    cout << pilha1.top() << endl;
    pilha1.pop(); //remove elemento da pilha
  }
  
  return 0;
};
