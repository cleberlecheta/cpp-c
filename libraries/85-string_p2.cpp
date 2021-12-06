#include <iostream>
#include <string>

using namespace std;

/* Biblioteca string P2 */
int main() {
  string john_14_6 = "Respondeu Jesus: Eu sou o caminho, a verdade e a vida. Ninguém vem ao Pai, a não ser por mim\n";
  int tam = john_14_6.size();

  for (int i=0; i<tam; i++) {
    cout << john_14_6.at(i); //at funcionana como [i]
  }

  //txt.front()
  cout << "\n ultimo elemento da string: " << john_14_6.back() << endl;
  //back retorna uma referencia para o último elemento da string -> txt.back() = 'J';
  
  //concatenação de string
  john_14_6 += "AP22 Portanto, declaro a todos os que ouvem as palavras da profecia deste livro: Se alguém lhes acrescentar algo, Deus lhe acrescentará os flagelos descritos neste livro.\n";
  john_14_6.append("AP22 Se alguém tirar alguma palavra deste livro de profecia, Deus tirará dele a sua parte na árvore da vida e na Cidade Santa, que são descritas neste livro.\n");
  //inserir um caracter ao final da string
  john_14_6.push_back('J');
  //remove o ultimo caractere da string
  john_14_6.pop_back(); 
  cout << "PERIDOG \n" << john_14_6;

  john_14_6.assign("um texto");
  john_14_6 += "outro texto\n";
  john_14_6.insert(8, " - "); //inserir em um posição específica
  cout << john_14_6;

  john_14_6.erase(11,6); //remover 6 caracteres a partir da posicao 11
  cout << john_14_6;

  john_14_6.replace(11, 6, "extra\n"); 
  cout << john_14_6;

  string txt1 = "Texto 1";
  string txt2 = "Texto 2";
  txt1.swap(txt2);
  cout << "swap - " << "txt2 = " << txt2 << endl;

  return 0;
};
