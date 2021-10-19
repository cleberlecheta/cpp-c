#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> aula, teste;
    int tam;
    list<int>::iterator it;

    teste.push_front(9);
    teste.push_front(9);
    teste.push_front(9);
    teste.push_front(9);

    tam = 10;
    for (int i=0; i<tam; i++) {
        aula.push_front(i); //retorna o element que esta na frente
    }

    it=aula.begin();
    advance(it, 5);
    aula.insert(it, 0); //inserir em um ponto diferente do inicio ou final da lista

    aula.sort();
    aula.reverse();
    
    aula.erase(it);
    //aula.clear();
    aula.merge(teste); //adiciona os elementos de teste em na fila de aulas

    cout << "Tamanho da lista: " << aula.size() << "\n\n";

    tam = aula.size();
    for (int i=0; i<tam; i++) {
        cout << aula.front() << "\n";
        aula.pop_front();
    }

    return 0;
}
