//
// Created by YuangLiu on 2020/12/9.
//

#ifndef C___FOLDER_H
#define C___FOLDER_H
#include <set>

class Message;
class Folder {
public:
    Folder() = default;
    Folder(const Folder&);
    Folder& operator=(const Folder&);
    ~Folder();
    void addMsg(Message*);
    void remMsg(Message*);
    void print();

private:
    std::set<Message*> messages;
};


#endif //C___FOLDER_H
