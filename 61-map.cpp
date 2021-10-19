#include <iostream>
#include <map>

using namespace std;

int main() {
    
    map<int, string>prod;
    prod[0]="Mouse";
    prod[1]="Teclado";
    prod[2]="Monitor";
    prod[3]="Cx.Som";
    prod.insert(pair<int,string>(4,"Fone de ouvido"));

    //prod.erase(2);
    //prod.clear();

    for(auto it:prod) {
        cout << it.first << endl;
    }

    //for (int i=0; i<4; i++) {
    for(auto it=prod.begin(); it!=prod.end(); it++) {
        cout << it->second << endl;
    }

    map<int, string>::iterator itmap;
    itmap=prod.find(3);
    if (itmap==prod.end()) {
        cout << "Produto nao encontrado" << endl;
    } else {
        cout << "Produto 3 => em estoque" << endl;
    }

    return 0;
}