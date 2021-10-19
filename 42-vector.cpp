#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> num1; //uma modernizacao da estrutura array
    vector<int> num2;
    int tam, i;

    num1.push_back(2);
    num1.push_back(3);
    num1.push_back(4);

    num2.push_back(5);
    num2.push_back(6);
    num2.push_back(7);
    num2.push_back(8);

    //num1.insert(num1.begin(), 888);
    num1.insert(num1.begin()+1, 888);
    num1.insert(num1.end(), 999);
    // num1.erase(num1.end());

    tam=num1.size();
    cout << "Tamanho do vector: " << tam << endl;

    cout << "\nPrimeiro valor de num1: " << num1.front() << endl;
    cout << "Ultimo valor de num1: " << num1.back() << endl;
    cout << "Valor do meio: " << num1.at(tam/2) << endl;

    num1.swap(num2); //inversao de valores entre os vectores

    for (i=0; i<tam; i++) {
        cout << num1[i] << " ";
    }

    cout << endl;

    for (i=0; i<tam; i++) {
        cout << num2[i] << " ";
    }

    while (!num1.empty())
    {
        num1.pop_back();
    }
    tam=num1.size();
    cout << "\n\nNovo tamanho de num1: " << tam << endl;
    
    
    return 0;
}