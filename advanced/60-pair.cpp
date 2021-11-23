#include <iostream>
#include <utility>

using namespace std;

int main() {

    pair<int, string> par(10, "Dez");
    cout << par.first << " - " << par.second << endl;

    //

    const int tam=3;
    pair<int, string> par2[tam];

    par2[0]=make_pair(11, "Onze");
    par2[1]=make_pair(12, "Doze");
    par2[2]=make_pair(13, "Treze");

    for(int i=0; i< tam; i++) {
        cout << par2[i].first << " - " << par2[i].second << endl;
    };

    //

    pair<int, pair<string, double>> par3[tam];

    par3[0]=make_pair(11, make_pair("mouse", 10.55));
    par3[1]=make_pair(12, make_pair("teclado", 50.49));
    par3[2]=make_pair(13, make_pair("monitor", 3999.98));

    for(int i=0; i< tam; i++) {
        cout << par3[i].first << " - " << par3[i].second.first << " - " << par3[i].second.second << endl;
    };

    return 0;
}
