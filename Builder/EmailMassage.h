#pragma once
#include "Message.h"
class EmailMassage :
    public Message
{
private:
    EmailMassage() {};
    EmailMassage(const EmailMassage&) = delete;
    EmailMassage& operator = (const EmailMassage&) = delete;

public:
    static EmailMassage& getInstance() {
        static EmailMassage instance;
        return instance;
    }
    string sendMessage() override;

};

