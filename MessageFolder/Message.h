//
// Created by YuangLiu on 2020/12/9.
//

#ifndef C___MESSAGE_H
#define C___MESSAGE_H
#include <string>
#include <set>
#include <utility>

class Folder;
class Message {
    friend class Folder;
    friend void swap(Message &lhs, Message &rhs);

public:
    explicit Message(std::string str): content(std::move(str)) { }
    Message (const Message&);
    Message& operator=(const Message&);
    Message& operator=(const Message&&);
    Message (Message&&);
    ~Message();
    void save(Folder&);
    void remove(Folder&);
    void print();
    void move_folders(Message*);

private:
    std::string content;
    std::set<Folder*> folders;
    void add_to_folder(const Message&);
    void remove_from_folders();
};


#endif //C___MESSAGE_H
