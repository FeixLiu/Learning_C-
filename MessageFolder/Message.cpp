//
// Created by YuangLiu on 2020/12/9.
//

#include <iostream>
#include "Message.h"
#include "Folder.h"

void Message::save(Folder &folder) {
    folders.insert(&folder);
    folder.addMsg(this);
}

void Message::remove(Folder &folder) {
    folders.erase(&folder);
    folder.remMsg(this);
}

void Message::add_to_folder(const Message &msg) {
    for (auto f : msg.folders)
        f->addMsg(this);
}

Message::Message(const Message &msg): content(msg.content), folders(msg.folders) {
    add_to_folder(msg);
}

void Message::remove_from_folders() {
    for (auto f : folders)
        f->remMsg(this);
}

Message::~Message() {
    remove_from_folders();
}

Message& Message::operator=(const Message &rhs) {
    remove_from_folders();
    content = rhs.content;
    folders = rhs.folders;
    add_to_folder(rhs);
    return *this;
}

void swap(Message &lhs, Message &rhs) {
    using std::swap;
    for (auto f : lhs.folders)
        f->remMsg(&lhs);
    for (auto f : rhs.folders)
        f->remMsg(&rhs);
    swap(lhs.folders, rhs.folders);
    swap(lhs.content, rhs.content);
    for (auto f : lhs.folders)
        f->addMsg(&lhs);
    for (auto f : rhs.folders)
        f->addMsg(&rhs);
}

void Message::print() {
    int count = 0;
    for (auto f : folders) {
        std::cout << "The " << count << " folders has ";
        f->print();
    }
}
