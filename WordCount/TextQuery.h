//
// Created by YuangLiu on 2020/12/5.
//

#ifndef C___TEXTQUERY_H
#define C___TEXTQUERY_H
#include <vector>
#include <string>
#include <fstream>
#include <map>
#include <set>

class QueryResult;
class TextQuery {
public:
    typedef std::vector<std::string>::size_type line_no;
    explicit TextQuery(std::ifstream&);
    QueryResult query(const std::string&) const;

private:
    std::shared_ptr<std::vector<std::string>> file;
    std::map<std::string,
             std::shared_ptr<std::set<line_no>>> wm;
};


#endif //C___TEXTQUERY_H
