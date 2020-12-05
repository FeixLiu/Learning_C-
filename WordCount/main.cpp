#include <iostream>
#include <string>
#include "TextQuery.h"
#include "QueryResult.h"
using namespace std;

void runQueries(ifstream &in) {
    TextQuery tq(in);
    while (true) {
        cout << "enter word to look for, or q to quit: ";
        string s;
        if (!(cin >> s) || s == "q")
            break;
        print(cout, tq.query(s)) << endl;
    }
}

int main() {
    ifstream infile("./input");
    runQueries(infile);
    infile.close();
    return 0;
}
