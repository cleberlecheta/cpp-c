#include <iostream>
#include <cstring> //string.h

using namespace std;

/* Funções para manipular strings, biblioteca cstring P2 */
int main() {
  char *txt1;
  char txt2[] = "Só Jesus Salva!";

  char pesquisa = 'J';
  txt1 = (char*) memrchr(txt2, pesquisa, strlen(txt2));
  if (txt1 != NULL) {
    cout << "Letra " << pesquisa << " encontrada na posição: " << txt1-txt2+1 << endl;
  } else {
    cout << "Letra " << pesquisa << " não encontrada" << endl;
  }
  cout << txt1 << endl;

  //ENCONTRAR PRIMEIRA OCORRENCIA DO CARACTERE NA STRING
  char *c = strchr(txt2, pesquisa);
  cout << "Pos: " << c-txt2+1 << endl;

  //LOCALIZAR DENTRO DA STRING UM CONJUNTO DE CARACTERES(CHAVE)
  char chave[] = "alva";
  int i = strcspn(txt2, chave);
  cout << "Pos: " << txt2[i] << endl;

  //ENCONTRAR ULTIMA OCORRENCIA DO CARACTERE NA STRING
  c = strrchr(txt2, pesquisa);
  cout << "Pos: " << c-txt2 << endl;

  //TAMANHO
  int tam = strlen(txt2);
  cout << tam << endl;

  //SPLIT
  char txt3[] = "Um teste, com vírgula - e traço";
  c = strtok(txt3, ",-");
  while (c != NULL)
  {
    cout << c << endl;
    c = strtok(NULL, ",-");
  }
  
  
  return 0;
};