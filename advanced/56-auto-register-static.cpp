#include <iostream>
#include <vector>

using namespace std;

void soma() {
    //auto i=0;
    static auto i=0;
    i++;
    cout << i << endl;
}

int main() {

    //concept (auto) C++11
    auto num{10};
    auto nome = "Cleber";

    vector<int>v{10,20,30,40,50,60,70};

    //for (vector<int>::iterator it=v.begin(); it!=v.end(); it++) {
    for (auto it=v.begin(); it!=v.end(); it++) {        
        cout << *it << endl << "\n";
    };

    //register - sugestion to store in the processor instead of commom memory space - fastest
    register int cont;
    for (register auto it=v.begin(); it!=v.end(); it++) {        
        cout << *it << endl;
    };

    //static
    soma();
    soma();
    soma();
    soma();
    soma();

    return 0;
}
