//
// Created by YuangLiu on 2020/12/6.
//

#ifndef C___HASPTR_H
#define C___HASPTR_H
#include "string"
#include <iostream>

class HasPtr {
    friend void swap(HasPtr &, HasPtr &);
    friend std::ostream& operator<<(std::ostream &, const HasPtr &);
public:
    HasPtr(const std::string &s = std::string()):
        ps(new std::string(s)), i(0) { }
    HasPtr(const HasPtr &p):
        ps(new std::string(*p.ps)), i(p.i) { }
    HasPtr& operator=(HasPtr);
    bool operator<(const HasPtr &) const;
    ~HasPtr() {
        delete ps;
    }

private:
    std::string *ps;
    int i;
};

#endif //C___HASPTR_H
