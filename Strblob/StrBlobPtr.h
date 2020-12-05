//
// Created by YuangLiu on 2020/12/5.
//

#ifndef C___STRBLOBPTR_H
#define C___STRBLOBPTR_H
#include "StrBlob.h"

class StrBlobPtr {
public:
    StrBlobPtr() : curr(0) { }
    StrBlobPtr(StrBlob &a, size_t sz = 0):
            wptr(a.data), curr(sz) { }
    std::string& deref() const;
    StrBlobPtr& incr();
    bool operator!=(StrBlobPtr &other) const {
        if (this->wptr.lock() == other.wptr.lock())
            return this->curr != other.curr;
        else
            throw std::runtime_error("different ptr");
    }

private:
    std::shared_ptr<std::vector<std::string>>
    check(size_t, const std::string &) const;
    std::weak_ptr<std::vector<std::string>> wptr;
    std::size_t curr;
};


#endif //C___STRBLOBPTR_H
