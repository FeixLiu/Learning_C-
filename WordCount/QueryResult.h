//
// Created by YuangLiu on 2020/12/5.
//

#ifndef C___QUERYRESULT_H
#define C___QUERYRESULT_H
#include <iostream>
#include <set>
#include "TextQuery.h"

class QueryResult {
    friend std::ostream& print(std::ostream &os, const QueryResult &qr);

public:
    QueryResult(std::string s,
                std::shared_ptr<std::set<TextQuery::line_no>> p,
                std::shared_ptr<std::vector<std::string>> f):
            sought(std::move(s)), lines(std::move(p)), file(std::move(f)) { }

private:
    std::string sought;
    std::shared_ptr<std::set<TextQuery::line_no>> lines;
    std::shared_ptr<std::vector<std::string>> file;
};


#endif //C___QUERYRESULT_H
