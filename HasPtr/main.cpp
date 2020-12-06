#include <iostream>
#include <vector>
#include "HasPtr.h"
using namespace std;

int main() {
    HasPtr hp1("abc");
    HasPtr hp2("def");
    HasPtr hp3("jhi");
    HasPtr hp4("gkl");
    HasPtr hp5("mno");
    vector<HasPtr> vec{hp5, hp3, hp1, hp4, hp2};
    sort(vec.begin(), vec.end());
    for (HasPtr &hp : vec)
        cout << hp << endl;
    return 0;
}