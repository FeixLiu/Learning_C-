#include <iostream>
#include "StrVec.h"
using namespace std;

void test() {
    StrVec vec;
    vec.push_back("123");
    vec.push_back("456");
    vec.push_back("789");
    vec.push_back("101112");
    vec.push_back("131415");
    vec.push_back("161718");
    for (auto & b : vec)
        cout << b << endl;
    vec = vec;
    for (auto & b : vec)
        cout << b << endl;
}

int main() {
    test();
    return 0;
}
