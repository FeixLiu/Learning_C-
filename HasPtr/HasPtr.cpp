//
// Created by YuangLiu on 2020/12/6.
//

#include "HasPtr.h"
#include <iostream>

inline
void swap(HasPtr &lhp, HasPtr &rhp) {
    using std::swap;
    swap(lhp.ps, rhp.ps);
    swap(lhp.i, rhp.i);
}

HasPtr& HasPtr::operator=(HasPtr rhp) {
    swap(*this, rhp);
    return *this;
}

bool HasPtr::operator<(const HasPtr &hp) const {
    return *ps < *hp.ps;
}

std::ostream& operator<<(std::ostream &os, const HasPtr &hp) {
    os << *hp.ps;
    return os;
}
