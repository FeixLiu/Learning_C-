#include <iostream>
#include "Message.h"
#include "Folder.h"
#include <string>
using namespace std;

void test() {
    string str1 = "123";
    string str2 = "456";
    Message msg1(str1);
    Message msg2(str2);
    Folder folder1;
    Folder folder2;
    folder1.print();
    folder2.print();
    folder1.addMsg(&msg1);
    folder2.addMsg(&msg2);
    folder1.print();
    folder2.print();
}

int main() {
    test();
    return 0;
}
