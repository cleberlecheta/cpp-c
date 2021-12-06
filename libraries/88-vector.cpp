#include <iostream>
#include <vector>

using namespace std;

/* Biblioteca Vector */
int main() {
  vector<int> vt={9,2,7,4,5,6,3,8,0,1};

  for (auto it=vt.rbegin(); it!=vt.rend(); it++) {
    cout << *it << endl;
  }

  cout << vt.size() << endl;
  cout << vt.max_size() << endl; //tamanho máximo que o vector pode ter

  vt.resize(5);
  for (auto it=vt.rbegin(); it!=vt.rend(); it++) {
    cout << *it << endl;
  }

  vt.shrink_to_fit(); //prints 5, originally was 10
  cout << endl;
  cout << vt.capacity() << endl;

  if (vt.empty()) {
      cout << "vector vazio";
  } else {
    //
  }

  cout << endl;
  cout << vt.at(3) << endl;
  cout << vt.front() << endl;
  cout << vt.back() << endl;

  vt.assign(10,0);

  return 0;
};
