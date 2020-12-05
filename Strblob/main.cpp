#include <iostream>
#include "StrBlob.h"
#include "StrBlobPtr.h"
using namespace std;

void print(StrBlob &blob) {
    for (
            StrBlobPtr start = blob.begin(), end = blob.end();
            start != end;
            start.incr()
            )
        cout << start.deref() << endl;
}

int main() {
    StrBlob a{"abd", "def", "hig"};
    print(a);
    return 0;
}
