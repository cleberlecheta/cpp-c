#include <iostream>
#include <fstream>
#include <string>

using namespace std;

/* Biblioteca fstream - funções para trabalhar com arquivos
 * https://www.youtube.com/watch?v=2UNw5-jfqhc
 */
int main() {

  fstream file;
  string line;
  char line_b[255];

  file.open("fstream_100.txt", fstream::in|fstream::out|fstream::app);
  //in = input (leitura)
  //out = output (escrita)
  //binary = modo binário
  //ate = abre para escrita e posiona no final
  //app = apprend, abre para escrita sem deletar o conteúdo atual, posiciona no final
  //trunc = truncate, abre para escrita e remove o conteúdo atual antes de abrir
  
  if(file.is_open()) {
    file << "Curso de C++" << endl << "Biblioteca fstream" << endl;
  } else {
    cout << "Arquivo não está aberto" << endl;
  }

  file.close();
  cout << endl;

  //////////////////////////////////////////////////////////////////////////////

  file.open("fstream_100.txt", fstream::in);
  if (file.is_open()) {
    while (getline(file, line)) {
      cout << line << endl;
    }
  } else {
    cout << "Arquivo não está aberto" << endl;
  }

  file.close();
  cout << endl;

  //////////////////////////////////////////////////// write -> escreve no arquivo

  file.open("fstream_100.txt", fstream::out|fstream::app); 
  if(file.is_open()) {
    file.write("\nhttps://www.youtube.com/watch?v=2UNw5-jfqhc\n", 56); //o numero representa o tamanho do que será escrito
  } else {
    cout << "Arquivo não está aberto" << endl;
  }
  file.close();
  cout << endl;

  file.open("fstream_100.txt", fstream::in);
  /* uma forma de ler
  while (getline(file, line)) {
    cout << line << endl;
  }*/
  //outra forma de ler
  file.read(line_b, 255); //o numero representa a quantidade de caracteres que será lido
  cout << line_b << endl;

  file.close();
  cout << endl;

  ////////////////////////////////////////////////////////////////// tellp - seekp
  //tellp = Retorna a posição do ponteiro dentro do stream
  //seekp = Define a posição do ponteiro dentro do stream

  long pos;
  file.open("fstream_100.txt", fstream::out);
  file.write("Aula 100", 10);
  pos = file.tellp();
  cout << pos << endl;

  file.seekp(pos-5);
  pos = file.tellp();
  cout << pos << endl;

  file.write("Curso C++", 10);
  file.close();
  cout << endl;

  ///////////////////////////////////////////////////////////////// beg - cur - end

  long pos2;
  file.open("fstream_100.txt", fstream::out);
  file.write("Aula 100", 10);
  pos = file.tellp();
  file.seekp(file.beg+4);

  pos = file.tellp();
  file.write("Curso C++", 10);
  file.close();
  cout << endl;

  return 0;
}
