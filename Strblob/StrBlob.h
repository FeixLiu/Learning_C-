//
// Created by YuangLiu on 2020/12/5.
//

#ifndef C___STRBLOB_H
#define C___STRBLOB_H
#include <iostream>
#include <vector>
#include <memory>
#include <string>

class StrBlobPtr;
class StrBlob {
public:
    friend class StrBlobPtr;
    StrBlobPtr begin();
    StrBlobPtr end();
    typedef std::vector<std::string>::size_type size_type;
    StrBlob();
    StrBlob(std::initializer_list<std::string> il);
    size_type size() const {
        return data->size();
    }
    bool empty() const {
        return data->empty();
    }
    void push_back(const std::string &t) {
        data->push_back(t);
    }
    void pop_back();
    std::string& front();
    std::string& back();

private:
    std::shared_ptr<std::vector<std::string>> data;
    void check(size_type i, const std::string &msg) const;
};



#endif //C___STRBLOB_H
