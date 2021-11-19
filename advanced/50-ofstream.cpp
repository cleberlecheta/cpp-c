#include <iostream>
#include <chrono>
#include <ctime>  
#include <fstream>

using namespace std;

//operação com arquivo
int main() {
    auto end = std::chrono::system_clock::now();
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);

    //OFSTREAM - inserir informações
    ofstream fileOut; //cria um arquivo para saída
    //fileOut.open("file.out"); //sempre criar um novo arquivo vazio
    fileOut.open("file.out",ios::app); //append to file mode
    fileOut << "saida para arquivo " << std::ctime(&end_time);
    fileOut.close(); //sempre fechar o arquivo apos usar

    return 0;
}