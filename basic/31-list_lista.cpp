#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> aula, teste;
    int tam;
    list<int>::iterator it;

    teste.push_front(9); //tem também o push_back
    teste.push_front(9);
    teste.push_front(9);
    teste.push_front(9);

    tam = 10;
    for (int i=0; i<tam; i++) {
        aula.push_front(i); //retorna o element que esta na frente 
    }

    it=aula.begin();
    advance(it, 5);
    //inserir em um ponto diferente do inicio ou final da lista
    aula.insert(it, 0); //insere o valor 0, na posição 5 do iterator

    aula.sort();
    aula.reverse();
    
    aula.erase(it);
    //aula.clear(); remove todos os elementos de uma vez, o .empty testa se está vazia ou não
    aula.merge(teste); //adiciona os elementos de teste na fila de aulas

    cout << "Tamanho da lista: " << aula.size() << "\n\n";

    tam = aula.size();
    for (int i=0; i<tam; i++) {
        cout << aula.front() << "\n";
        aula.pop_front(); //tem tambem o pop_back
    }

    return 0;
}
