#include <iostream>
#include <array>

using namespace std;

/* Biblioteca array */
int main() {
  array<int, 10> vt={2,4,6,8,0,1,3,5,7,9};

  for(auto it=vt.begin(); it!=vt.end(); it++) {
    cout << *it << endl;
  }

  for(auto it=vt.rbegin(); it!=vt.rend(); it++) {
    cout << *it << endl;
  }

  cout << vt.size() << endl;
  cout << vt.max_size() << endl;
  if (vt.empty()) {
    cout << "Array vazio";
  }

  cout << vt[4];
  cout << vt.at(4);

  cout << vt.front();
  cout << vt.back();

  array<int, 10> zero_lefts_array;
  zero_lefts_array.fill(0);
  for (auto x: zero_lefts_array) {
    cout << x << endl;
  }

  vt.swap(zero_lefts_array);
  for (auto x: zero_lefts_array) {
    cout << x << endl;
  }

  return 0;
};
