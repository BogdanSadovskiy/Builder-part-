#pragma once
#include "Message.h"
class SMSMessage :
    public Message
{
private:
    SMSMessage() {};
    SMSMessage(const SMSMessage&) = delete;
    SMSMessage& operator = (const SMSMessage&) = delete;

public:
    static SMSMessage& getInstance() {
        static SMSMessage instance;
        return instance;
    }
    string sendMessage() override;
};

