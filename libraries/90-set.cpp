#include <iostream>
#include <set>

using namespace std;

/* Biblioteca Set - mantem os elementos sempre ordenados
   FIND
   COUNT
 */
int main() {
  set<int> st1 = {9, 1, 0, 2, 8, 3, 7, 4, 6, 5};
  set<int>::iterator it;

  for (auto x: st1) {
    cout << x << " - ";
  }
  cout << endl;

  //-

  set<int> st2 = {50, 90, 30, 80, 20, 70, 60};
  it = st2.begin();
  st2.insert(it, 40);
  it = st2.end();
  st2.insert(it, 10);
  it =++ ++ ++st2.begin();
  st2.insert(it, 90);

  for (auto x: st2) {
    cout << x << " - ";
  }
  cout << endl;

  //-

  set<int> st3 = {9,1,0,2,8,3,7,4,6,5};
  it = st3.begin();
  st3.erase(it);
  it = st3.end();
  //st3.erase(it);
  //it =++st3.begin();
  //st3.erase(it);

  for (auto x: st3) {
    cout << x << " - ";
  }
  cout << endl;
  
  return 0;
};
