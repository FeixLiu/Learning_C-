//
// Created by YuangLiu on 2020/12/9.
//

#include "Folder.h"
#include "Message.h"
#include <iostream>

Folder::Folder(const Folder &folder): messages(folder.messages) {
    for (auto msg : messages)
        msg->save(*this);
}

Folder& Folder::operator=(const Folder &rhs) {
    for (auto msg : messages)
        msg->remove(*this);
    messages = rhs.messages;
    for (auto msg : messages)
        msg->save(*this);
    return *this;
}

Folder::~Folder() {
    for (auto msg : messages)
        msg->remove(*this);
}

void Folder::print() {
    if (messages.empty())
        std::cout << "Empty folder" << std::endl;
    else {
        for (auto msg : messages)
            std::cout << msg->content << " ";
        std::cout << std::endl;
    }
}

void Folder::addMsg(Message *msg) {
    messages.insert(msg);
}

void Folder::remMsg(Message *msg) {
    messages.erase(msg);
}
