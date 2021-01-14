#include<iostream>
# include "Blob.h"
using namespace std;

int main() {
    Blob<int> squares = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (size_t i = 0; i != squares.size(); i++)
        squares[i] = squares[i] * squares[i];
    for (size_t i = 0; i != squares.size(); i++)
        cout << squares[i] << endl;
    return 0;
}