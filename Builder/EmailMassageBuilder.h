#pragma once
#include "MassageBuilder.h"
class EmailMassageBuilder :
    public MassageBuilder
{
private:
  
public:
    EmailMassageBuilder();
    void sendMassage() override;
};

