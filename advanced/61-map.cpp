#include <iostream>
#include <map>

using namespace std;

int main() {

    map<int, string> prod;

    prod[10]="Mouse";
    prod[11]="Teclado";
    prod[12]="Monitor";
    prod.insert(pair<int,string>(33, "Produto errado")); //insert em map requer um: pair
    prod.insert(pair<int,string>(14, "Cx.Som"));
    prod.insert(pair<int,string>(15, "Apagar1"));
    prod.insert(pair<int,string>(16, "Apagar2"));
    prod.insert(pair<int,string>(17, "Sera?"));

    prod.erase(33); //apaga o elemento na chave 33
    prod.erase(prod.find(15), prod.find(17)); //apaga elementos no intervalo

    for(auto it:prod) {
        cout << it.second << endl;
    };

    map<int,string>::iterator itmap;
    itmap = prod.find(12);
    if (itmap == prod.end()) {
        cout << "\n Produto não encontrado" << endl;
    } else {
        cout << "\n -> Produto em estoque" << endl;
        cout << "Codigo: " << itmap->first << " Prod: " << itmap->second << endl;
    }

    prod.clear(); //elimina todos os elementos do mapa

    return 0;
}
