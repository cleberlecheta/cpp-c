#include <iostream>
#include <vector>
#include <map>

using namespace std;

struct Pessoa {
    string nome;
    int idade;
};

class Veiculo {
    public:
    int tipo;
    string nome;
};

int main() {

    int standardWay = 10;

    int newWay{10};
    string nome{"Jesus"};
    vector<int> valores{1,2,3,4,5,6};
    map<string,string>capitais{{"MG", "Belo Horizonte"}};

    Pessoa p1{"Jesus", 33};
    Pessoa p2{"Cleber", 38};

    Veiculo v1{1, "Tatimóvel"};

    return 0;
}
