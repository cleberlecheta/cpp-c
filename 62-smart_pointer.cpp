#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int>n{0,1,2,3,4,5,6,7,8,9};
    //vector<int>::iterator it;

    //for(auto it=n.begin(); it!=n.end(); it++) {
    //for (auto it:n) {
    for_each(n.begin(), n.end(), [](int num){
        num+=10;
        cout << num << endl;
    });
    
    return 0;
}