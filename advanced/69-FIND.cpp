#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>

using namespace std;

int main() {
    vector<int> num = {5,3,1,4,7,2,6};
    auto it=find(num.begin(),num.end(),7);

    //int *p;
    //size_t tam = sizeof vetor/4; //armazena tamanho de elementos, divide por 4 porque é do tipo int
    //p=find(vetor,vetor+tam,6);

    //algoritmo find
    if(it != num.end()) {
        cout << "Numero encontrado: " << *it << endl;
    } else {
        cout << "Numero não encontrado!" << endl;
    }

    //metodo find já está embutido no tipo map
    map<char, int> mapa;
    mapa['a'] = 10;
    mapa['b'] = 33;
    mapa['c'] = 25;
    mapa['d'] = 5;
    mapa['e'] = 80;
    
    auto it2 = mapa.find('c');
    if(it2 != mapa.end()) {
        cout << "Chave encontrada: " << it2->second << endl;
    } else {
        cout << "Chave não encontrada!" << endl;
    }

    string texto = "Aula de c++"; //string também tem find embutido
    size_t enc = texto.find("c++"); //size_t é um tipo próprio para armazenar tamanho de elementos
    if(enc != string::npos) { //npos - valor máximo do tipo string
        cout << "Palavra encontrada at: " << enc << endl;
    } else {
        cout << "Palavra não encontrada!" << endl;
    }

    return 0;
};